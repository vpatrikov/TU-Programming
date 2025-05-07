-- Таблица с лични данни за клиентите
CREATE TABLE IF NOT EXISTS clients (
    id INT NOT NULL AUTO_INCREMENT PRIMARY KEY,
    first_name VARCHAR(70) NOT NULL,
    last_name VARCHAR(70) NOT NULL,
    phone_num VARCHAR(13) NOT NULL,
    email VARCHAR(40) NOT NULL UNIQUE
);

-- Таблица с информация за потребителите
CREATE TABLE IF NOT EXISTS users (
    id INT NOT NULL AUTO_INCREMENT PRIMARY KEY,
    username VARCHAR(50) UNIQUE NOT NULL,
    password VARCHAR(50) NOT NULL,
    client_id INT NOT NULL,
    FOREIGN KEY (client_id) REFERENCES clients(id)
);

-- Логове за съобщенията
CREATE TABLE IF NOT EXISTS messages(
    id INT NOT NULL AUTO_INCREMENT PRIMARY KEY,
    sender_id INT NOT NULL,
    reciever_id INT NOT NULL,
    sent_at DATETIME DEFAULT CURRENT_TIMESTAMP,
    message_status ENUM('delivered', 'seen', 'pending', 'error') NOT NULL,
    FOREIGN KEY (sender_id) REFERENCES users(id),
    FOREIGN KEY (reciever_id) REFERENCES users(id)
);
-- Таблица за иформация относно приятелската листа
CREATE TABLE IF NOT EXISTS friendships(
    id INT NOT NULL AUTO_INCREMENT PRIMARY KEY,
    user1_id INT NOT NULL,
    user2_id INT NOT NULL,
    request_status ENUM('accepted', 'declined', 'pending') NOT NULL,
    FOREIGN KEY (user1_id) REFERENCES users(id),
    FOREIGN KEY (user2_id) REFERENCES users(id)
);

-- Таблица с информация относно блокирания между потребителите
CREATE TABLE IF NOT EXISTS blocks(
    id INT NOT NULL AUTO_INCREMENT PRIMARY KEY,
    blocker_id INT NOT NULL,
    blocked_id INT NOT NULL,
    time_blocked DATETIME DEFAULT CURRENT_TIMESTAMP,
    FOREIGN KEY (blocker_id) REFERENCES users(id),
    FOREIGN KEY (blocked_id) REFERENCES users(id)
);

-- Таблица с информация относно гледания на профилите
CREATE TABLE IF NOT EXISTS profile_views(
    id INT NOT NULL AUTO_INCREMENT PRIMARY KEY,
    viewer_id INT NOT NULL,
    viewed_id INT NOT NULL,
    time_viewed DATETIME DEFAULT CURRENT_TIMESTAMP,
    FOREIGN KEY (viewer_id) REFERENCES users(id),
    FOREIGN KEY (viewed_id) REFERENCES users(id)
);

-- Таблица с информация относно връзките между потребителите
CREATE TABLE IF NOT EXISTS connections(
    id INT NOT NULL AUTO_INCREMENT PRIMARY KEY,
    user1_id INT NOT NULL,
    user2_id INT NOT NULL,
    connected_at DATETIME NOT NULL,
    last_interaction DATETIME DEFAULT CURRENT_TIMESTAMP,
    interaction_count INT DEFAULT 0,
    connection_type ENUM('friend', 'frequent_contact', 'blocked', 'none'),
    FOREIGN KEY (user1_id) REFERENCES users(id),
    FOREIGN KEY (user2_id) REFERENCES users(id),
    UNIQUE(user1_id, user2_id)
);

-- Таблица с логове относно действия, извървшвани от потребителите
CREATE TABLE IF NOT EXISTS activity_log(
    id INT NOT NULL AUTO_INCREMENT PRIMARY KEY,
    user_id INT NOT NULL,
    action_type VARCHAR(50) NOT NULL,
    target_user_id INT,
    created_at DATETIME DEFAULT CURRENT_TIMESTAMP,
    FOREIGN KEY (user_id) REFERENCES users(id),
    FOREIGN KEY (target_user_id) REFERENCES users(id)
);

