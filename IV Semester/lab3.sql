SELECT * FROM reader
WHERE id NOT IN (SELECT reader_id FROM book_reader);

SELECT DISTINCT 
    author.name AS author_name, 
    book.title, 
    book.price, 
    book.category, 
    book.publisher_id
FROM book
INNER JOIN author ON book.author_id = author.id;

SELECT DISTINCT 
	book.title,
    publisher.country AS country
FROM book
INNER JOIN publisher ON book.publisher_id = publisher.id
WHERE publisher.country = "USA";

SELECT title FROM book
WHERE id IN (
    SELECT book_reader.reader_id
    FROM book_reader
    INNER JOIN reader ON book_reader.reader_id = reader.id
    WHERE reader.email LIKE "%@example.com"
);

SELECT 
	first_name, 
    last_name
FROM reader
WHERE id IN (
	SELECT reader_id
    FROM book_reader
    INNER JOIN reader on book_reader.reader_id = reader.id
    WHERE date_taken LIKE "2023%"
);


