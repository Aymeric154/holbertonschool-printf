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

- Include Libraries:  
  Include the necessary libraries for your project, such as stdio.h for console operations.

- Use the Function Prototype:  
  Declare the _printf prototype in your program.

- Handle Variable Arguments:  
  Use standard library functions to manage variable arguments, such as va_start, va_arg, an    d va_end.

- Parse Format Specifiers:  
   Implement logic to identify and handle different format specifiers in the format string.

- Return Character Count:  
  The function should return the total number of characters printed.
