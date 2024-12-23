# Maximum Value Template Function

A simple C++ program demonstrating a template function that finds the maximum of two values of any comparable type.

## Description

This program implements a generic template function `findMaximum()` that can compare and return the larger of two values of any data type that supports the greater than (>) operator.

### Key Features
- Generic template function
- Support for multiple data types
- Uses ternary operator for comparison
- Clean and concise implementation

## Function Template Structure

```cpp
template <typename T>
T findMaximum(T a, T b) {
    return (a > b) ? a : b;
}
