# 📘 Learning C

Welcome! This repository is a collection of my personal progress and exercises as I learn the **C programming language**. 

All the code and instructions follow the classic path laid out in the industry standard:
> [**The C Programming Language, 2nd Edition by Brian W. Kernighan & Dennis M. Ritchie**](https://www.cs.emory.edu/~cheung/Courses/255/Syllabus/1-C-intro/Docs/C-book.pdf)
> [^1]:https://www.cs.emory.edu/~cheung/Courses/255/Syllabus/1-C-intro/Docs/C-book.pdf[^1]

---

## 🛠️ Prerequisites

Before you start, you'll need the following tools:

### 1. Text Editor
Any text editor will work. Popular choices include:
*   **VS Code**, **Vim**, **emacs**, **sublime Text** or even **Notepad**.
*   *Note: Always save your files with the `.c` extension (e.g., `hello.c`).*

### 2. C Compiler
You need a compiler to transform your code into an executable:
*   **Linux:** GCC (`sudo apt install build-essential` on Debian/Ubuntu).
*   **Windows:** [MinGW-w64](https://www.mingw-w64.org) (for GCC) or **Visual Studio Build Tools** (for `cl.exe`).
*   **macOS:** Install **Xcode Command Line Tools** via terminal: `xcode-select --install`.

---

## 🚀 Step-by-Step Guide (Using GCC)

Follow these steps to compile and run your first program from the terminal.

### 1. Open your Terminal
Navigate to the directory where you saved your code:
```bash
cd Documents/C_Programs
```
---
### 2. Compile the Program 
  Use the gcc command. The -o flag allows you to name your output file:
bash# Syntax: 
```
gcc [source_file].c -o [executable_name]
gcc hello.c -o hello
```
- Note: If you omit -o, the compiler creates a default file named a.out (or a.exe on Windows).
---

### 3. Run the ExecutableOnce compiled, trigger the program using the following command:
  On Linux/macOS:bash
```
./hello
```
  On Windows: powershell
```
hello.exe
```
Usa el código con precaución.Happy Coding! 🧑‍💻.
