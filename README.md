# Practical Assignment 10: Templates in C++

## Student Details
- **Name:** Samruddhi Amol Mhamane
- **PRN:** 202501110050
- **Division:** A
- **Batch:** A2
- **Faculty:** Khushal Khairnar Sir

## Problem Statement
Implement a C++ program to demonstrate a function template and a class template.

## Objectives
- Understand templates in C++.
- Implement a function template for different data types.
- Implement a class template for different data types.
- Improve code reusability and reduce code duplication.

## Theory
Templates allow functions and classes to work with different data types.

- **Function Template:** A generic function that works with different data types.
- **Class Template:** A generic class that stores or processes different data types.

## Algorithm
1. Include the required header files.
2. Define the function template `displayValue()`.
3. Define the class template `Box`.
4. Call the function template with integer and decimal values.
5. Create `Box<int>` and `Box<string>` objects.
6. Display the results.

## Technology Used
- **Language:** C++
- **IDE:** Embarcadero Dev-C++ 6.3
- **Header Files:** `<iostream>`, `<string>`

## Source Code
**File:** `templates.cpp`

```cpp
#include <iostream>
#include <string>
using namespace std;

template <class T>
void displayValue(T value)
{
    cout << "Value: " << value << endl;
}

template <class T>
class Box
{
private:
    T data;

public:
    Box(T value)
    {
        data = value;
    }

    void display()
    {
        cout << "Box contains: " << data << endl;
    }
};

int main()
{
    cout << "Function Template:" << endl;

    displayValue(10);
    displayValue(5.5);

    cout << "\nClass Template:" << endl;

    Box<int> b1(100);
    Box<string> b2("Hello C++");

    b1.display();
    b2.display();

    return 0;
}
```

## Sample Output

```text
Function Template:
Value: 10
Value: 5.5

Class Template:
Box contains: 100
Box contains: Hello C++
```

## Results / Observations
- The function template works with integer and decimal values.
- The class template works with integer and string values.
- Templates reduce code duplication and improve code reusability.

## Conclusion
This practical demonstrates function templates and class templates in C++. Templates make programs more reusable by allowing the same code to work with different data types.

## Repository Contents
- `templates.cpp` — C++ source code
- `README.md` — Practical documentation
- `output.png` — Program output screenshot (optional)
