DELIMITER //
CREATE PROCEDURE addBookToDatabase(
    IN p_ISBN CHAR(13),
    IN p_title VARCHAR(100),
    IN p_price DECIMAL(10,0),
    IN p_category VARCHAR(20),
    IN p_publisher_id INT,
    IN p_maintained_by INT,
    IN p_author_id INT
)
BEGIN
    IF NOT EXISTS (SELECT 1 FROM publisher WHERE id = p_publisher_id) THEN
        INSERT INTO publisher(id) VALUES (p_publisher_id);
    END IF;
    IF NOT EXISTS (SELECT 1 FROM author WHERE id = p_author_id) THEN
        INSERT INTO author(id) VALUES (p_author_id);
    END IF;
    INSERT INTO book (ISBN, title, price, category, publisher_id, maintained_by, author_id)
    VALUES (p_ISBN, p_title, p_price, p_category, p_publisher_id, p_maintained_by, p_author_id);
    SELECT 'Book added succesfully to DB' AS Message;
END //
DELIMITER ;


CREATE OR REPLACE VIEW book_rent_report AS
SELECT 
    b.title,
    b.ISBN,
    b.category,
    COUNT(brb.book_id) AS borrowed_count,
    
    IF(COUNT(brb.book_id) = 0, b.price * 0.5,
        IF(COUNT(brb.book_id) = 1, b.price * 0.75,
            IF(COUNT(brb.book_id) >= 2, b.price * 1.05, b.price)
        )
    ) AS adjusted_price

FROM book b
LEFT JOIN bookrent_book brb ON b.id = brb.book_id
GROUP BY b.id;

DELIMITER //
CREATE PROCEDURE readerInformation()
BEGIN
SELECT
    SUM(IF(sex = 'male', 1, 0)) AS total_males,
    SUM(IF(sex = 'female', 1, 0)) AS total_females,
    SUM(IF(sex = 'other', 1, 0)) AS total_others
FROM reader;

SELECT first_name, last_name, sex FROM reader
ORDER BY sex;

END //
DELIMITER ;


DELIMITER $$

CREATE PROCEDURE GenerateBookReport()
BEGIN
    CREATE TEMPORARY TABLE IF NOT EXISTS temp_book_report (
        title VARCHAR(100),
        ISBN CHAR(13),
        category VARCHAR(20),
        adjusted_price DECIMAL(10,2),
        rented_count INT
    );

    INSERT INTO temp_book_report (title, ISBN, category, adjusted_price, rented_count)
    SELECT
        b.title,
        b.ISBN,
        b.category,
        CASE
            WHEN COUNT(br.id) = 0 THEN b.price * 0.5
            WHEN COUNT(br.id) = 1 THEN b.price * 0.75
            ELSE b.price * 1.05
        END AS adjusted_price,
        COUNT(br.id) AS rented_count
    FROM book b
    LEFT JOIN bookrent br ON b.id = br.id  -- Предположено е, че `bookrent.id` съвпада с `book.id`
    GROUP BY b.id;

    SELECT * FROM temp_book_report;
END$$

DELIMITER ;
