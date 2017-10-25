# C printf project     
    
## Introduction   
   
Th printf project is to re-create our own printf simulates the original C printf function. In this functioin, format specifiers  %d, %i, %s, and %c are supported but not other specifiers as in the original printf.  
   
## Usage
   
The function takes argumet and produces output according to the format specified, and returns the number of character printed. If the funcation fails, it returns -1.
       
Ordinary charachters (not %) are copied unchanged to the standard output. % is used as conversion specifier and can take argument.   
     
The prototype of the printf funcaiton is:   
```c
int printf(const char *format, ...);
```
To print a regular string without any argument, you would write:         
```c
_printf("Hello, world.");
```
   
To print a string with integer, you would use %d or %i specifier and write:   
```c
_printf("This is a number: %d", 34);
```   
```c
_printf("This is a number: %i", 34);
```      
   
To print a string with char, you would use %c specifer and write:   
```
_printf("This is a letter: %c", 'A');
```   
    
To print a string with array of char, you would use %s specifer and write:  
```
_printf("Hello %s.", "world");
```    
   
There is no limit on how many arguments to include in a string, but the arguments must correspond with the conversion specifiers.        
   
## List of files  
   
**_putchar.c:** A function prints single charachter   
**func.c:** A function prints strings and characters  
**holberton.h:** Header file  
**int_printer.c:** A function prints integers and numbers in decimal format  
**man_3_printf:** printf man page   
**print.c:** A function identifies and converts format specifiers  
