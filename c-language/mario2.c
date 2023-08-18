#include <cs50.h>
#include <stdio.h>

int main (void) 

// here we are using the do while loop to get the input from the user 
// the do while loop will run at least once and then check the condition so if the user enters a negative number or zero it will ask again until the user enters a positive number then it will get out of the loop
// so here I am saying literally keep doing that if the number is less than 1
{
    // here we are saying the type of the variable n is an integer and the value should be decided by the user
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);

    {
        for(int i = 0; i < n; i++) 
        {
            for(int j = 0; j< n; j ++)
            {
                printf("#");
            }
            printf("\n");
        }
    }
}