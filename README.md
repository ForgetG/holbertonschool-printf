
# _printf

The program is a pseudo- recreation of the C standard library function, printf.
## Description

The function _printf writes output to standard output. The function writes under the control of a format string that specifies how subsequent arguments (accessed via the variable-length argument facilities of stdarg) are converted for output.
## Requirements

The _printf function was coded on an Ubuntu 22.04.3 LTS machine with gcc version 11.4.0 .

#### Compilation:
```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
##  Example
The conversion specifier (introduced by the character %) is a character that specifies the type of conversion to be applied. The _printf function supports the following conversion specifiers:

#### c :
`input`
```
#include main.h
int main(void)
{
    _printf("%c\n", H);
}

```
`output`
```
H
```

#### s :
`input`
```
#include main.h
int main(void)
{
    _printf("%s\n", "Hello, World!");
}

```
`output`
```
Hello, World!
```

#### d, i :
`input`
```
#include main.h
int main(void)
{
    _printf("%d\n", 10);
    _printf("%i\n", 15);
}

```
`output`
```
10
15
```

#### % :
`input`
```
#include main.h
int main(void)
{
    _printf("Percent:[%%]\n");
}

```
`output`
```
Percent:[%]
```

The _printf function returns the total number of characters written (not includiing the final null character) if the operation was successful. 

`input`
```
#include main.h
int main(void)
{
    len = _printf("Hello, World!");
    _printf("Length:%d\n", len);
}

```
`output`
```
Hello, World!
Length:13
```
## Man Page
File: [man_3_printf](https://github.com/ForgetG/holbertonschool-printf/blob/main/man_3_printf)
## Flowchart

![alt text](https://github.com/ForgetG/holbertonschool-printf/blob/main/_printf.png?raw=true)  


![alt text](https://github.com/ForgetG/holbertonschool-printf/blob/main/printf.png?raw=true)


![alt text](https://github.com/ForgetG/holbertonschool-printf/blob/main/process_specifier.png?raw=true)






## Author

Guillaume Forget  
Keiko Bisou