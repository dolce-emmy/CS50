#include <stdio.h>
#include <cs50.h>

// int main(void) 
// {

//     string answer = get_string("what's your name? ");
//     printf("hello, %s\n", answer );
// }

// stdio.h is a header file that contains the standard input/output library

// to run the code we need to compile it first using make hello then ./hello
// vs code is an enviromental code editor that is used to write code 

// syntax highlighting

//we have 2 files in this program hello.c and hello 
// hello.c is the source code file and hello is the executable file that is created after compilation to make the machine understand the code
// hello is a binary file that is created after compilation


// printf is a function that is used to print the output on the screen

// when remove semi colon from the code it will give an error hello.c:5:29: error: expected ';' after expression... that means on line 5 the 29th character is missing a semi colon

// header files are files that contain the code that is used in the program and they are included in the program using #include <stdio.h>

//----------------------------------

// here the %s is a placeholder for the string to plug in the value of the string


// int main (void)
// {
//     string first = get_string("what's your first name? ");
//     string last = get_string("what's your last name? ");
//     printf("hello, %s %s\n", first, last);
// }

//here there are 2 arguments to the printf function the first is the string and the second is the variable that is to be printed
int main (void)
{
   
    printf("hello I got 100%%\n");
}