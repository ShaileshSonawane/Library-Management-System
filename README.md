## Library Management System (C++ with Database)

## Overview

The **Library Management System** is a **console-based application** developed using **C++** that simulates real-world library operations such as managing books, handling users, and maintaining records.

This project integrates **MySQL database connectivity**, enabling persistent data storage and efficient data management. It demonstrates strong understanding of **Object-Oriented Programming (OOP)** along with **database integration**.

---

## Features

Add, update, and manage book records
Search books efficiently
Admin login system
Store and retrieve data using MySQL database
Database connectivity using MySQL Connector/C++
Modular and scalable code structure

---

## Technologies Used

* **C++**
* **MySQL Database**
* **MySQL Connector/C++**
* **Object-Oriented Programming (OOP)**
* Developed using **Visual Studio 2022**

---

Project Structure

```bash id="m4j4f7"
Library-Management-System/
│
├── LibraryManager/
│   ├── BookNode.cpp
│   ├── LoginManager.cpp
│   ├── LoginManager.h
│   ├── admin.cpp
│   ├── admin.h
│
├── Admin.h
├── LibraryManager.sln
├── .gitignore
```

---

## Database Integration

* Uses **MySQL** for persistent storage
* Stores book and user data in structured tables
* Performs operations like insert, update, and search using SQL queries

---

## How to Run

1. Clone the repository:

```bash id="gpf9lf"
git clone https://github.com/ShaileshSonawane/Library-Management-System.git
```

2. Set up MySQL database:

* Create required tables (books, users, etc.)
* Update database credentials in the code

3. Open the project in Visual Studio 2022

4. Build and run:

```bash id="d6b6hc"
Ctrl + F5
```

---

## Concepts Demonstrated

* Object-Oriented Programming (OOP)
* Database Connectivity
* SQL Query Execution
* Modular Programming
* Real-world system design

---

## Sample Output

```bash id="rsygkj"
1. Add Book
2. Search Book
3. Admin Login

Enter your choice:
```

---

## Future Enhancements

* 📊 Advanced search and filtering
* 🖥️ GUI interface

---

## Author

**Shailesh Sonawane**
GitHub: https://github.com/ShaileshSonawane

---

## ⭐Support

If you found this project useful, give it a ⭐ on GitHub!
