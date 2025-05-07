DELIMITER // 
CREATE PROCEDURE publisherMoreThanCountBooks(IN bookCount INT)
BEGIN
SELECT p.id, p.name, COUNT(b.id) AS book_count
FROM publisher p
JOIN book b ON p.id = b.publisher_id
GROUP BY p.id, p.name
HAVING COUNT(b.id) > bookCount;
END
//
DELIMITER ;

DELIMITER //
CREATE PROCEDURE totalBooksReader(IN fname VARCHAR(20), IN lname VARCHAR(20))
BEGIN 
SELECT COUNT(*) AS total_books
FROM book_reader br 
WHERE reader_id = 
(SELECT id FROM reader WHERE first_name LIKE fname AND last_name LIKE lname);
END
//
DELIMITER ; 

DELIMITER //
CREATE PROCEDURE scammerGetsScammed(IN r_id INT, OUT five_percent DECIMAL(10, 2))
BEGIN
UPDATE book
SET price = price + (0.1 * price)
WHERE id IN (SELECT book_id FROM book_reader WHERE reader_id = r_id);

SELECT SUM(price) + (SUM(PRICE) * 0.05)
INTO five_percent
FROM book
WHERE id IN (SELECT book_id FROM book_reader WHERE reader_id = r_id);
END
//
DELIMITER ;

CALL scammerGetsScammed(1, @result);
SELECT @result

DELIMITER //
CREATE PROCEDURE addBookToDb(
    IN p_ISBN CHAR(13),
    IN p_title VARCHAR(100),
    IN p_price DECIMAL(10,0),
    IN p_category VARCHAR(20),
    IN p_publisher_id INT,
    IN p_maintained_by INT,
    IN p_author_id INT
)
BEGIN
    IF EXISTS (SELECT 1 FROM publisher WHERE id = p_publisher_id) THEN
        IF EXISTS (SELECT 1 FROM author WHERE id = p_author_id) THEN
            INSERT INTO book (ISBN, title, price, category, publisher_id, maintained_by, author_id)
            VALUES (p_ISBN, p_title, p_price, p_category, p_publisher_id, p_maintained_by, p_author_id);
            SELECT 'Book added successfully to DB' AS Message;
        ELSE
            SELECT 'Unable to add book to DB: author does not exist' AS Message;
        END IF;
    ELSE
        SELECT 'Unable to add publisher to DB: publisher does not exist!' AS Message;
    END IF;
END //
DELIMITER ;

DELIMITER //



DELIMITER //
CREATE PROCEDURE booksInfo()
BEGIN
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
LEFT JOIN bookrent brb ON b.id = brb.book_id
GROUP BY b.id;
END //
DELIMITER ;

booksinfo();
