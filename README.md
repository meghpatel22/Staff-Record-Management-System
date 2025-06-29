# 🧾 Staff Record Management System in C++

This project is a **console-based staff record management system** built using **C++**. It displays a predefined list of staff details such as name, age, branch, gender, and email in a clean tabular format.

It demonstrates the use of:
- Standard Input/Output in C++
- Screen clearing with `system("cls")`
- Basic formatting and structured display of records

> ✅ This repository includes a precompiled Windows `.exe` file (`staff_record.exe`) so you can directly run the application without compiling the code.

---

## 🎯 Features

- Displays staff records in a structured format
- Uses C++ Standard Library headers (`<iostream>`, `<string>`)
- Clears screen before showing output (Windows-compatible)
- Beginner-friendly and simple to understand
- Extendable for features like add/edit/delete/search

---

## 📁 Project Structure

staff-record-cpp/
├── staff_record.cpp # Main C++ source file
├── staff_record.exe # Windows executable
└── README.md # Project documentation


---

## 🛠 Technologies Used

| Component     | Description                          |
|---------------|--------------------------------------|
| Language      | C++                                  |
| Compiler      | g++ / MinGW / Visual Studio          |
| Libraries     | iostream, string, windows.h (Windows)|
| Platform      | Windows (for `system("cls")` and `.exe`) |

---

## 🚀 How to Run the Program

### ✅ Option 1: Run the Provided `.exe` (Windows)

1. Download or clone the repository.
2. Double-click on `staff_record.exe`.
3. The program runs in a terminal window.

> 💡 No compilation needed if you are on Windows.

### 🔧 Option 2: Compile from Source

If you want to compile the code yourself:

#### On Windows (using g++)

```bash
  g++ staff_record.cpp -o staff_record.exe
  ./staff_record.exe

#### On Linux/macOS (replace system("cls") with system("clear"))

```bash
  g++ staff_record.cpp -o staff_record
  ./staff_record
