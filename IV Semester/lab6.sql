SAVEPOINT backup;

ALTER TABLE publisher
ADD CONSTRAINT fk_parent_publisher
FOREIGN KEY (parent_id) REFERENCES publisher(id) ON DELETE RESTRICT;

CREATE TABLE IF NOT EXISTS bookRent (
id INT NOT NULL AUTO_INCREMENT PRIMARY KEY,
cost DECIMAL (6, 2) NOT NULL,
date DATETIME NOT NULL,
paid BOOLEAN NOT NULL,
reader_id INT,
FOREIGN KEY (reader_id) REFERENCES book_reader(reader_id)
);

INSERT INTO bookRent (cost, date, paid, reader_id) VALUES
(12.50, '2025-03-01 14:00:00', TRUE, 1),
(8.75, '2025-03-05 10:30:00', FALSE, 2),
(15.00, '2025-03-07 16:45:00', TRUE, 1),
(9.20, '2025-03-10 12:15:00', TRUE, 3),
(6.80, '2025-03-11 09:00:00', FALSE, 2),
(11.00, '2025-03-15 18:20:00', TRUE, 3);

BEGIN;
UPDATE bookrent SET cost = cost - 10 
WHERE id IN (SELECT MAX(id) FROM bookrent WHERE reader_id = 1)
AND cost > 10;
UPDATE bookRent SET cost = cost + 10
WHERE id IN (SELECT MIN(id) FROM bookrent WHERE reader_id = 1); 
COMMIT;
ALTER TABLE book_reader
DROP FOREIGN KEY book_reader_ibkf_2;
ALTER TABLE book_reader
ADD FOREIGN KEY (reader_id) REFERENCES reader(id)
ON UPDATE CASCADE
ON DELETE CASCADE;

ALTER TABLE bookRent
DROP FOREIGN KEY bookrent_ibfk_1;
ALTER TABLE bookRent
ADD FOREIGN KEY (reader_id) REFERENCES reader(id)
ON UPDATE CASCADE
ON DELETE CASCADE;
COMMIT;

ALTER TABLE book_reader
DROP FOREIGN KEY book_reader_ibfk_1;
ALTER TABLE book_reader
ADD FOREIGN KEY (book_id) REFERENCES book(id)
ON UPDATE CASCADE
ON DELETE CASCADE;

BEGIN;
SET FOREIGN_KEY_CHECK = 0;
DELETE FROM reader;
DELETE FROM author;
DELETE FROM book;
DELETE FROM book_reader;
DELETE FROM bookrent;
DELETE FROM parent_publisher;
DELETE FROM publisher;
DELETE FROM reader;
DELETE FROM staff;
SET FOREIGN_KEY_CHECK = 1;
COMMIT;