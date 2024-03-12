#include <iostream>

// Function declaration
int addNumbers(int a, int b);

int main() {
    int result = addNumbers(5, 7);
    std::cout << "Sum: " << result << std::endl;

    return 0;
}

// Function definition
int addNumbers(int a, int b) {
    return a + b;
}


#include <iostream>

int add(int a, int b);
double add(double a, double b);

int main() {
    int result1 = add(5, 7);
    double result2 = add(3.5, 2.5);

    std::cout << "Sum (int): " << result1 << std::endl;
    std::cout << "Sum (double): " << result2 << std::endl;

    return 0;
}

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

#include <iostream>

// Inline function declaration
inline int multiply(int a, int b) {
    return a * b;
}

int main() {
    int result = multiply(3, 4);
    std::cout << "Product: " << result << std::endl;

    return 0;
}

#include <iostream>

// Recursive function declaration
int factorial(int n);

int main() {
    int result = factorial(5);
    std::cout << "Factorial: " << result << std::endl;

    return 0;
}

// Recursive function definition
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
