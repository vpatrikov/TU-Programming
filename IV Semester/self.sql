CREATE TABLE IF NOT EXISTS clients (
	id INT NOT NULL AUTO_INCREMENT PRIMARY KEY,
	name VARCHAR(150) NOT NULL,
	phone_num VARCHAR(10) NOT NULL,
	address VARCHAR(100) NOT NULL,
	gender ENUM ("male", "female", "other") NOT NULL,
	dob DATE NOT NULL,
	account_id INT NOT NULL,
	trainer_id INT
);

CREATE TABLE IF NOT EXISTS accounts (
	id INT NOT NULL AUTO_INCREMENT PRIMARY KEY,
	username VARCHAR(60) UNIQUE NOT NULL,
	password VARCHAR(100) NOT NULL
);

CREATE TABLE IF NOT EXISTS trainers (
	id INT NOT NULL AUTO_INCREMENT PRIMARY KEY,
	name VARCHAR(150) NOT NULL,
	spec VARCHAR(70) NOT NULL,
	working_hours VARCHAR(11) NOT NULL,
	account_id INT,
	CONSTRAINT FOREIGN KEY (account_id) REFERENCES accounts(id)
);

ALTER TABLE clients
	ADD CONSTRAINT fk_client_account FOREIGN KEY (account_id) REFERENCES accounts(id),
	ADD CONSTRAINT fk_client_trainer FOREIGN KEY (trainer_id) REFERENCES trainers(id);

CREATE TABLE IF NOT EXISTS programs (
	id INT NOT NULL AUTO_INCREMENT PRIMARY KEY,
	name VARCHAR(150) NOT NULL,
	duration INT NOT NULL,
	description VARCHAR(255) NOT NULL,
	trainer_id INT,
	CONSTRAINT FOREIGN KEY (trainer_id) REFERENCES trainers(id)
);

CREATE TABLE IF NOT EXISTS client_programs (
    client_id INT NOT NULL,
    program_id INT NOT NULL,
    dos DATE NOT NULL,
    PRIMARY KEY (client_id, program_id),
    FOREIGN KEY (client_id) REFERENCES clients(id),
    FOREIGN KEY (program_id) REFERENCES programs(id)
);

DELETE FROM clients
WHERE phone_num = "0888123456";

UPDATE trainers SET spec = "Cardio"
WHERE name = "Ivan Petrov";

ALTER TABLE programs
ADD price DECIMAL(5,2) NOT NULL;

CREATE TABLE IF NOT EXISTS equipment (
    id INT NOT NULL AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(100) NOT NULL,
    type VARCHAR(50) NOT NULL,
    program_id INT NOT NULL,
    FOREIGN KEY (program_id) REFERENCES programs(id) ON DELETE CASCADE
);

INSERT INTO clients (name, phone_num, address, gender, dob, account_id, trainer_id)
VALUES ("Vladimir Patrikov", "0894938834", "obelya 2 226 vh. 2", "male", "2004-12-03", 1, NULL);

SELECT * FROM clients
WHERE gender = "female";

SELECT * FROM programs
WHERE price BETWEEN 20 AND 35;

SELECT * FROM clients
WHERE name LIKE "Georgi%" OR address LIKE "%Sofia%";


INSERT INTO accounts (username, password)
VALUES 
('vlad.p', 'pass123'),
('ivan.p', 'trainerpass'),
('maria.s', 'mypass321'),
('georgi.k', 'secure123'),
('ani.t', 'passani');

INSERT INTO trainers (name, spec, working_hours, account_id)
VALUES 
('Ivan Petrov', 'Fitness', '09:00-17:00', 2),
('Maria Stancheva', 'Yoga', '10:00-18:00', 3),
('Georgi Kolev', 'Crossfit', '08:00-16:00', 4);

INSERT INTO clients (name, phone_num, address, gender, dob, account_id, trainer_id)
VALUES 
('Vladimir Patrikov', '0894938834', 'Obelya 2, bl.226', 'male', '2004-12-03', 1, 1),
('Ani Todorova', '0888001122', 'Sofia, Mladost', 'female', '1995-07-21', 5, 2),
('Georgi Georgiev', '0899005566', 'Plovdiv, Center', 'male', '1990-03-14', NULL, NULL);

INSERT INTO programs (name, duration, description, trainer_id, price)
VALUES 
('Fat Burner', 60, 'Cardio intensive program for weight loss.', 1, 30.00),
('Yoga Flow', 45, 'Relaxation and stretching class.', 2, 25.00),
('Power Circuit', 75, 'Full-body strength training.', 3, 35.00);

INSERT INTO client_programs (client_id, program_id, dos)
VALUES 
(1, 1, '2024-03-01'),
(2, 2, '2024-03-05'),
(1, 3, '2024-03-15');

INSERT INTO equipment (name, type, program_id)
VALUES 
('Treadmill', 'Cardio Machine', 1),
('Yoga Mat', 'Mat', 2),
('Kettlebell 16kg', 'Free Weight', 3);
