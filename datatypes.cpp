#include<iostream>
#include<iomanip> // for setw
#include<string>  // for string class
#include<limits>  // for numeric_limits

using namespace std;

int main() {
    // Integer types
    int integerVar = 10;
    short shortVar = 20;
    long longVar = 30;
    unsigned int unsignedVar = 40;

    cout << "Integer Types:" << endl;
    cout << "int: " << integerVar << endl;
    cout << "short: " << shortVar << endl;
    cout << "long: " << longVar << endl;
    cout << "unsigned int: " << unsignedVar << endl;

    // Floating-point types
    float floatVar = 3.14f;
    double doubleVar = 2.71828;

    cout << "\nFloating-point Types:" << endl;
    cout << "float: " << fixed << setprecision(2) << floatVar << endl;
    cout << "double: " << doubleVar << endl;

    // Character types
    char charVar = 'A';
    wchar_t wideCharVar = L'B';

    cout << "\nCharacter Types:" << endl;
    cout << "char: " << charVar << endl;
    wcout << "wchar_t: " << wideCharVar << endl;

    // Boolean type
    bool boolVar = true;

    cout << "\nBoolean Type:" << endl;
    cout << "bool: " << boolalpha << boolVar << endl;

    // String type
    string stringVar = "Hello, C++!";

    cout << "\nString Type:" << endl;
    cout << "string: " << stringVar << endl;

    // Limits of integer types
    cout << "\nLimits of Integer Types:" << endl;
    cout << "int min: " << numeric_limits<int>::min() << endl;
    cout << "int max: " << numeric_limits<int>::max() << endl;
    cout << "unsigned int max: " << numeric_limits<unsigned int>::max() << endl;

    // User input for demonstrating cin and error handling
    int userInput;
    cout << "\nEnter an integer: ";
    while (!(cin >> userInput)) {
        cout << "Invalid input. Please enter an integer: ";
        cin.clear();             // clear input buffer to restore cin to a usable state
        cin.ignore(100, '\n');   // ignore the last input
    }
    cout << "You entered: " << userInput << endl;

    return 0;
}

















// What are the derived data types in C++?
// Derived data types in C++ are built from primitive or fundamental data types and include arrays, functions, pointers, and references. They allow for more complex data structures and operations, expanding the language's capability to handle diverse programming needs.

// What are the 3 data types in C++?
// The 3 types of data types in C++ are Built-in, user-defined, and derived. Built-in data types in C++ are pre-defined data types, user-defined data types are defined by the user, and derived are derived from existing data types in C++.

// Is string a data type in C++? 
// No, Strings are used to store a series of characters or text. This is not a built-in type but functions similarly in its most basic application. String values must be enclosed in double quotation marks.

// Abstract or User-Defined Data Types in C++
// The data types that are defined by the user themselves are known derived data types or user-defined data types. Various types of User Defined data types are:

// 1. Class
// It consists of data members and member functions, which can be accessed and used by creating an instance (object) of the class. A class is a kind of blueprint for an object. Classes are the building block for C++ that leads to Object-Oriented Programming. Classes are created using the “class” keyword.

// Classes are the building blocks of object-oriented programming and are used to create objects by encapsulating data and behaviour. Developers provide a systematic blueprint for organizing and managing data in a more streamlined and modular manner by defining classes with the "class" keyword.

// Syntax: 

// Class ClassName
// {
// 	Access Specifer // Can take any one of the three values
// 	// Private, Protected, Protected
// 	Data members // variables to be used
// 	Member functions // Methods/Functions to access the data members
// }; // a class always ends with a semicolon
// 2. Structure
// A structure creates a data type that is a collection of variables of different data types grouped together under a single name/type. A structure is declared using the struct keyword.

 

// Syntax: struct Structure_Name{ // variables of different data types };
 

// This syntax defines a C++ structure named "Structure_Name" that can hold variables of various data types. Structures are used to group related data together in a single unit.

// 3. Union
// In union, all the members which are defined share the same memory location, i.e., any change brought in one member of the union will be reflected in all other members.

 

// Syntax: union Union_name{ // data members };
// 4. Enumeration 
// It is a user-defined data type whose main purpose is to make the program easy to read and maintain. It is basically used to assign meaning full names to integral constants. To define an enumeration, the keyword enum is used.

 

// Syntax: enum flag{constant1, constant2, constant3, ....... };

