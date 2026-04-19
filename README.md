# File Integrity Monitoring System

## Project Description

This project is a simple File Integrity Monitoring System developed in C++. Its main purpose is to check whether a file has been changed or deleted over time. It works by storing a baseline of file hashes and comparing them later.

---

## Features

* Create a baseline of files
* Detect if a file is modified
* Detect if a file is deleted
* Easy menu-based interface

---

## How It Works

First, the user enters the names of files. The system reads each file and generates a hash value for it. These hash values are saved in a baseline file.

Later, when the user runs the checking option, the system calculates the hash again and compares it with the stored value.

* If the hash is the same → file is **Safe**
* If the hash is different → file is **Modified**
* If the file is missing → file is **Deleted**

---

## Hashing Technique

This project uses a simple hashing method:

hash = hash * 31 + character

This makes sure that even a small change in the file changes its hash value.

---

## Technologies Used

* C++
* File Handling (ifstream, ofstream)
* Basic Hashing Logic

---

## How to Run

1. Open the project in any C++ IDE (like VS Code)
2. Compile all `.cpp` files
3. Run the program
4. Choose:

   * Create Baseline
   * Check Files

---

## Limitations

* The hashing method is basic and not fully secure
* There is a chance of hash collisions
* Works only on local files

---

## Future Improvements

* Use SHA-256 for better security
* Add a GUI interface
* Implement real-time monitoring

---

## Author

Hamna Masood
