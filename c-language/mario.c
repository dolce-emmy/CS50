#include <stdio.h>
#include <cs50.h>

int main (void) 

{

// here we are giving const to n so that it can not be changed later on in the code

//  const int n = 3;

int n = get_int("Size: ");

 for(int i = 0; i < n; i++) 
{
    for(int j = 0; j< n; j ++)
    {
        printf("#");
    }

    printf("\n");
}

    // here we print \n out of the loop so that it only prints once allowing the ? to be next to each other
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("?");
    // }
    // printf("\n");

// for (int i = 0; i< 3 ; i++)

// {

//     printf("#\n");
// }

}
