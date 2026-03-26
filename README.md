# 🎓 Student Course Management System

A console-based C++ application for managing students and their enrolled courses, built with Object-Oriented Programming principles and the C++ Standard Template Library (STL).

---

## 📋 Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Tech Stack](#tech-stack)
- [UML Class Diagram](#uml-class-diagram)
- [Usage](#usage)

---

## Overview

This project is an individual C++ assignment that demonstrates core programming concepts including:

- **Object-Oriented Programming (OOP)** — classes, encapsulation, inheritance, and constructors
- **STL Containers** — `vector`, `map`, `set`, and/or `list`
- **STL Algorithms** — `sort()`, `find_if()`, `count_if()` from `<algorithm>`

The system provides a menu-driven interface that allows users to add, remove, search, and manage students along with their course enrollments.

---

## Features

| # | Feature | Description |
|---|---------|-------------|
| 1 | **Add Student** | Register a new student with a unique ID, name, and GPA |
| 2 | **Remove Student** | Delete a student record using their ID |
| 3 | **Search Student** | Look up a student by their ID |
| 4 | **Display All Students** | List every registered student |
| 5 | **Enroll in Course** | Assign a course to a student (no duplicates) |
| 6 | **Show Student Courses** | View all courses a student is enrolled in |
| 7 | **Sort by GPA** | Display students ranked by GPA |
| 8 | **Exit** | Quit the application |

---

## Tech Stack

- **Language:** C++17
- **Standard Library:** STL (`<vector>`, `<map>`, `<set>`, `<algorithm>`, `<iostream>`)
- **Build:** g++ / any standard C++ compiler

---

## UML Class Diagram

```
┌─────────────────────┐
│        Person       │
├─────────────────────┤
│ # name : string     │
├─────────────────────┤
│ + Person(name)      │
│ + getName() : string│
└─────────┬───────────┘
          │  inherits
          ▼
┌──────────────────────────┐
│         Student          │
├──────────────────────────┤
│ - id   : int             │
│ - gpa  : double          │
│ - courses : set<string>  │
├──────────────────────────┤
│ + Student(id, name, gpa) │
│ + getId() : int          │
│ + getGpa() : double      │
│ + enrollCourse(string)   │
│ + getCourses() : set     │
│ + display() : void       │
└──────────────────────────┘

┌───────────────────────────────────┐
│         CourseManager             │
├───────────────────────────────────┤
│ - students : vector<Student>      │
├───────────────────────────────────┤
│ + addStudent(...)    : void       │
│ + removeStudent(id)  : void       │
│ + searchStudent(id)  : Student*   │
│ + displayAll()       : void       │
│ + enrollInCourse(id, course)      │
│ + showCourses(id)    : void       │
│ + sortByGPA()        : void       │
└───────────────────────────────────┘
```

> 📄 A full UML diagram (PDF/image) is included in the submission.

---

## Usage

Once launched, you'll see the main menu:

```
========================================
   Student Course Management System
========================================
1. Add Student
2. Remove Student
3. Search Student
4. Display All Students
5. Enroll Student in Course
6. Show Student Courses
7. Sort Students by GPA
8. Exit
Enter your choice: _
```

### Example Session

```
Choice: 1
Enter Student ID: 1001
Enter Name: Ali
Enter GPA: 3.5
✔ Student added successfully.

Choice: 5
Enter Student ID: 1001
Enter Course Name: Data Structures
✔ Ali enrolled in Data Structures.

Choice: 7
--- Students Sorted by GPA ---
[1] Ali (ID: 1001) — GPA: 3.5
```

---
