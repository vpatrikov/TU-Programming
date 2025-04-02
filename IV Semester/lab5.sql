SELECT SUM(id) AS publishers_in_USA FROM publisher
WHERE country LIKE "USA";

SELECT country, COUNT(id) AS count
FROM publisher
GROUP BY country;

SELECT * FROM book_reader;

SELECT r.id, r.first_name, r.last_name, COUNT(br.book_id) AS books_taken
FROM reader r
LEFT JOIN book_reader br ON r.id = br.reader_id
GROUP BY r.id, r.first_name, r.last_name;

INSERT INTO book_reader (book_id, reader_id, date_taken, date_returned)
VALUES 
	(5, 1, "2025-02-05 09:00:00", NULL),
	(3, 2, "2025-01-10 10:00:00", "2025-12-20 8:30:00"),
    (10, 5, "2025-03-01 10:00:00", NULL);

SELECT r.id, r.first_name, r.last_name, COUNT(br.book_id) AS books_taken
FROM reader r
LEFT JOIN book_reader br ON r.id = br.reader_id
GROUP BY r.id, r.first_name, r.last_name
HAVING COUNT(br.book_id) > 2;

CREATE VIEW books_taken_by_emily_wilson AS
SELECT b.id, b.ISBN, b.title, b.category, b.price
FROM book b
JOIN book_reader br ON b.id = br.book_id
JOIN reader r ON br.reader_id = r.id
WHERE r.first_name = 'Emily' AND r.last_name = 'Wilson';

SELECT SUM(price) AS total_price FROM books_taken_by_emily_wilson;

SELECT p.name AS publisher_name, b.title, b.price, COUNT(br.reader_id) AS reader_count
FROM publisher p
JOIN book b ON p.id = b.publisher_id
LEFT JOIN book_reader br ON b.id = br.book_id	
WHERE b.price = (
    SELECT MAX(b2.price)
    FROM book b2
    WHERE b2.publisher_id = p.id
)
GROUP BY p.name, b.title, b.price;	


    

