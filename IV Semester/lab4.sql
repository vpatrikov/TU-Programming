USE `2024_tu_lab1`;

SELECT title, price FROM book
WHERE price IN (10, 15, 50);

SELECT book.title AS "Заглавие", publisher.name AS "Издателство",
publisher.country AS "Държава" FROM book
LEFT JOIN publisher on book.publisher_id = publisher.id;

SELECT reader.first_name, reader.last_name, staff.name AS "staff_names" FROM reader
LEFT JOIN staff on reader.staff_id = staff.id;

CREATE TABLE IF NOT EXISTS parent_publisher(
id INT AUTO_INCREMENT PRIMARY KEY, 
name VARCHAR(100) NOT NULL,
country VARCHAR(20) NOT NULL
);

ALTER TABLE publisher
ADD COLUMN parent_id INT NULL;

ALTER TABLE publisher
ADD CONSTRAINT FOREIGN KEY (parent_id) REFERENCES parent_publisher(id)
ON DELETE SET NULL;

SELECT publisher.name AS "Publisher Name", publisher.country AS "Publisher Country", 
parent_publisher.name AS "Parent Name", parent_publisher.country AS "Parent Country"
FROM publisher
LEFT JOIN parent_publisher ON publisher.parent_id = publisher.parent_id;

SELECT * FROM account;

SELECT reader.first_name AS "Име", reader.last_name AS "Фамилия", 
reader.address AS "Адрес" FROM reader
WHERE reader.account_id in (
	SELECT id FROM account 
	WHERE username LIKE "%@gmail.com"
);