#include<cs50.h>
#include<stdio.h>


int main (void) 
{
  char c =  get_char("do you agree? ");

  if (c == 'y') {
    printf("agreed \n");
  } else if (c == 'n') {
    printf("not agreed \n");
    } else {
        printf("invalid input \n");
        }
} 

// here we are using the get_char function to get the value of c from the user 
// here we are using the char data type to store the value of c as a character
// here the char data is to agree or not agree to something
// the char data uses single quotes to store the value of the character which is different from the string data type which uses double quotes to store the value of the string





