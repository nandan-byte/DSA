# C++ Basics and Core Concepts

An educational project by **Nandan B Deshamukh** that explains the fundamentals of C++ through code and documentation. Ideal for beginners who want to understand what C++ is, its history, key features, and how it differs from Procedural Programming.

---

## 📘 Contents

- [What is C++]
- [History of C++]
- [POP vs OOP]
- [Features of C++]
- [C++ to .exe Compilation]
- [Sample C++ Code]

---

## What is C++?

C++ is a general-purpose programming language developed by **Bjarne Stroustrup** in 1979. It is an extension of the C language with added object-oriented programming features. C++ supports both low-level system programming and high-level application development.

---

## History of C++

- Developed at Bell Labs by Bjarne Stroustrup.
- Originally called "C with Classes".
- Renamed to C++ in 1983.
- Combines the power of C with features like classes, inheritance, polymorphism, and templates.

---

## POP vs OOP

| POP (Procedural)                            | OOP (Object-Oriented)                         |
|---------------------------------------------|-----------------------------------------------|
| Code is organized as procedures/functions   | Code is organized around objects and classes  |
| Functions and data are separate             | Combines data and behavior in one place       |
| Example: C programming                      | Example: C++, Java, Python (OOP style)        |

---

## Features of C++

- Object-Oriented Programming** (Classes, Objects, Inheritance, Polymorphism).
- Fast and Efficient.
- Strong Type Checking.
- Templates and Standard Template Library (STL).
- Platform Independent Source Code.
- Portable - Platform specific.
- Extensible - user can add there own user defined function in libraries.
- Strongly typed language
- Dynamic Memory Allocation

---

## C++ to .exe Compilation

When you write a `.cpp` file (C++ source code), it is compiled by a compiler (like `g++`) to create a platform-specific executable:


g++ cpp_basics.cpp -o cpp_basics.exe  # On Windows
./cpp_basics                         # On Linux/Mac

--

#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!";
    return 0;
}
