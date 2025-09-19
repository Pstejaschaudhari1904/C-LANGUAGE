#include <stdio.h> /*This line is a preprocessor directive.
                    It tells the compiler to include the Standard Input/Output library (stdio.h).
                    Functions like printf() and scanf() are defined inside this library.*/


                    void main()     /*This is the main function of the program where execution begins.
                                    void means the function does not return any value.
                                    Note: In modern C standards, it’s better to use int main() instead of void main().*/
{


    int a=10;       /*This declares a variable named a of type integer.
                    It is initialized with the value 10.*/

    
    Printf("Hello Ps_Tejas\n");         //Again, \n moves the output to a new line.

    printf("Welcome to Learn C Language\n");

    printf("Value of number : %d",a);   /*d is a format specifier for integers.
                                        It prints the value of variable a.
                                        Since a=10, the output will be:*/



}                                       /*This curly brace closes the main() function.
                                        It marks the end of the program.*/