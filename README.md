# C++ Utility Library - OOP Mastery Project

A comprehensive C++ utility library consisting of 7 core classes designed to simulate advanced functionalities found in high-level languages like C#. This project serves as a practical implementation of Object-Oriented Programming (OOP) concepts, focusing on code reusability, modularity, and clean architectural design.

## 🚀 Overview

The primary goal of this project was to solidify OOP principles by building a robust foundation of utility classes. Each class is designed to handle specific tasks ranging from complex date/time manipulations and string processing to data validation and mathematical algorithms, all while ensuring zero **circular dependency**.

## 🛠️ Core Classes & Features

### 1. `clsDate` (The DateTime Engine)
A powerful class that mimics the `DateTime` struct in C#. It demonstrates a deep understanding of **Method Overloading**, **Static vs. Non-Static methods**, and **Code Reuse**.
- **Calculations:** Year/Month/Day/Hour/Minute/Second counts for any given year.
- **Calendar Tools:** Print formatted Month and Year calendars.
- **Date Math:** Add/Subtract days, swap dates, and calculate the difference between two dates.
- **Utility:** Determine the day order in a week/year and handle leap year logic.

### 2. `clsString` (Advanced String Manipulation)
Heavily inspired by C#'s String class, providing high-level manipulation capabilities.
- **Number to Text:** A sophisticated function to convert very large numbers into their representative English words.
- **Formatting:** Tools for casing, splitting, joining, and trimming strings.

### 3. `clsPeriod` (Time Interval Management)
Built upon `clsDate`, this class manages time intervals and periods.
- **Overlap Detection:** Check if two periods intersect.
- **Containment:** Check if a specific date lies within a period.
- **Intersection:** Calculate the number of overlapping days between two periods.

### 4. `clsValidate` (The Validation Engine)
A dedicated class for data integrity and logical checks.
- **Range Validation:** Numbers and dates within specific bounds.
- **Mathematical Checks:** Prime number verification, Palindrome checks, and Leap Year validation.
- **Matrix Validation:** Specialized functions for `IsIdentityMatrix`, `IsScalarMatrix`, and `IsPalindromeMatrix`.
- **Security:** `IsStrongPassword` function for credential validation.

### 5. `clsUtil` (General Utilities & Algorithms)
A class for random generation and array processing.
- **Random Generators:** Generate random Capital/Small characters, digits, words, and secure Keys (Single or Batch).
- **Array Operations:** Min/Max discovery, Prime counting, Odd/Even counting, and `CopyDistinctArray`.
- **2D Matrix:** Functions for printing, summing, multiplying, and searching within 2D arrays.
- **Fibonacci:** Implementations using both **Iterative loops** and **Recursion**.
- **Encryption:** Basic `EncryptText` and `DecryptText` simple algorithms.

### 6. `clsInput` (Safe Console Input)
Handles user interaction with built-in validation to prevent runtime errors.
- **Strict Typing:** Read only numbers, positive numbers, single characters, or full strings directly from the console with internal error handling.

### 7. `clsCalculator` (Mathematical Logic)
A simple simulation of a basic calculator.
- **Operations:** Handles Addition, Subtraction, Multiplication, and Division.

## 🏗️ Technical OOP Concepts Applied

- **Encapsulation:** Data and methods are bundled within classes to hide internal complexity.
- **Abstraction:** Providing simple interfaces for complex operations (e.g., Number-to-Words).
- **Static vs. Instance Methods:** Strategic use of static methods for utility access and instance methods for object-specific data.
- **Composition:** Demonstrated in `clsPeriod` which effectively utilizes `clsDate`.
- **Method Overloading:** Used extensively to provide flexibility in how functions are called.
- **Circular Dependency Management:** The architecture is carefully designed to ensure a clean hierarchy of dependencies.

## 💻 Installation

1. Clone the repository:
   ```bash
   git clone [https://github.com/ebrahim-hasan-dev/MyLibrary-repo.git]
   ```
---

## 💻 How to Use

Since the library is template-based, you can simply include the required header files in your project:

```cpp
#include <iostream>
using namespace std;
#include "../MyLibrary/clsUtil.h";


int main()
{
    cout << clsUtil<int>::ConvertNumberToText(1500000) << "\n";

    return 0;
}
```
---

## ⚠️ Important Notes
- **Generic Programming:** All classes are implemented using **C++ Templates**, making the library type-independent and flexible.

- A console app project has been added to test any class.
---

   ## 👤 About the Author

**Ebrahim Hasan**
A passionate Software Developer with a solid foundation in Computer Science. My journey started with learning the basics of the C++ language (Functional programming), then mastering **Algorithms, Object Oriented Programming and Data Structures** in C++, then learning C#, .NET and SQL Server Database, which paved the way for building complex systems using **C# and .NET**.

* **Expertise:** Desktop Applications (WinForms), SQL Server Database Design, and Logic Automation.
* **Key Projects:** Driver License Management System, Code Generator Tool.
* **Current Goal:** Transitioning into Web Full-stack Development (C#/.NET Backend).

---
📫 **Connect with me:**
* 📧 **Email:** [ebrahim-hasan-dev@gmail.com](mailto:ebrahim-hasan-dev@gmail.com)
* 💼 **LinkedIn:** [Your Profile Name](https://linkedin.com/in/ebrahim-hasan-dev)
