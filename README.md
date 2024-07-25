
# _printf

The program is a pseudo- recreation of the C standard library function, printf.
## Description

The function _printf writes output to standard output. The function writes under the control of a format string that specifies how subsequent arguments (accessed via the variable-length argument facilities of stdarg) are converted for output.
## Usage

To use the _printf function, assuming the above dependencies have been installed, compile all .c files in the repository and include the header main.h with any main function.  

Compilation:  
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
##  Example

_printf("My name is %s" and i'm % d years old.\n, "Marc", 35);  
output : My name is Marc and i'm 35 years old.


_printf(That string is empty:%s, it's length is: %i.\n", "", 0);  
output : that string is empty:, it's length is 0.
## Testing

Expliquez comment vous avez testé votre code, y compris ave c Valgrind
## Flowchart

![alt text](https://github.com/ForgetG/holbertonschool-printf/blob/keiko/_printf.png?raw=true)  

![alt text](https://github.com/ForgetG/holbertonschool-printf/blob/keiko/printf.png?raw=true)



![alt text](https://github.com/ForgetG/holbertonschool-printf/blob/keiko/process_specifier.png?raw=true)





