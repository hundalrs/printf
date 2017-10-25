# C Project - printf     
    
## Introduction   
   
Th printf project is to re-create our own printf simulates the original C printf function. In this function, format specifiers  %d, %i, %s, and %c are supported but not other specifiers as in the original printf.  
   
## Usage
   
The function takes argument and produces output according to the format specified, and returns the number of character printed. If the function fails, it returns -1.
       
Ordinary characters (not %) are copied unchanged to the standard output. % is used as conversion specifier and can take argument.   
     
The prototype of the printf function is:   
```c
int printf(const char *format, ...);
```
To print a regular string without any argument, you would write:         
```_printf("Hello, world.");```
   
To print a string with integer, you would use %d or %i specifier and write:   
```_printf("This is a number: %d", 34);```   
```_printf("This is a number: %i", 34);```      
   
To print a string with char, you would use %c specifer and write:   
```_printf("This is a letter: %c", 'A');```   
    
To print a string with array of char, you would use %s specifer and write:  
```_printf("Hello %s.", "world");```    
   
There is no limit on how many arguments to include in a string, but the arguments must correspond with the conversion specifiers.        
   
## List of files  
   
**_putchar.c:** A function prints single character   
  
**func.c:** A function prints strings and characters, and calls int_printer.c to print integers and numbers in decimal. It checks and prints '%' if it follows by another '%'.  
   
**holberton.h:** Header file  
   
**int_printer.c:** A function prints integers and numbers in decimal format  
  
**man_3_printf:** printf man page   
   
**print.c:** A function identifies and converts format specifiers  
