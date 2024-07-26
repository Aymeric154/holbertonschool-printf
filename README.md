# Holberton School - Printf Project

This document provides an overview of the custom implementation of the printf function in C.
Description

The custom _printf function allows formatted output to the console, similar to the standard printf function. It supports basic data types and format specifiers.
## Function Prototype

int _printf(const char *format, ...);

## Specifiers Used

    Displaying a percent sign: %%
    Displaying strings: %s
    Displaying characters: %c
    Displaying integers: %d, %i

## How to Use the Function

    Include Libraries:
    To use _printf, ensure you include the necessary standard libraries in your project. For console operations and variable argument handling, include:

    #include <stdio.h>
    #include <stdarg.h>

## Use the Function Prototype:
Declare the _printf prototype in your program, as shown above. This declaration lets the compiler recognize the function's existence and usage in the code.

## Handle Variable Arguments:
The _printf function uses variadic arguments to handle a flexible number of input parameters. This is managed using standard library macros:

    va_start: Initializes the variable argument list.
    va_arg: Retrieves each argument from the list based on the specified type.
    va_end: Cleans up the list after usage.

## Parse Format Specifiers:
The core functionality of _printf involves parsing the format string to identify and interpret format specifiers. The function should:

    Traverse the format string.
    Detect the '%' character to identify the beginning of a specifier.
    Match the specifier with supported formats (e.g., %s, %c, %d).
    Call the corresponding function to handle each data type and produce the formatted output.

## Implementation Details
### Project Structure

The project is structured into several files for better organization and modularity:

    _printf.c:
    Contains the main logic of the _printf function.

    _putchar.c:
    Contains the _putchar function to print individual characters.

    get_func.c:
    Contains the get_func function to match format specifiers with handling functions.

    print_functions.c:
    Contains specific functions to handle and print various data types.

    main.h:
    Contains the function prototypes and necessary library inclusions.

    

#### List of contributors of the projet _printf
Gelle Aymeric Boureima Diarra

  
