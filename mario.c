// Week 1 Problem Set - Mario Block Building
// Author: Murray MacKenzie

#include <cs50.h>
#include <stdio.h>

int main(void)

{
    // User enters the height of blocks
    int myHeight;
    do 
    {
        myHeight = get_int("Enter Height: "); 
    }
    while (myHeight < 1 || myHeight > 8);

    // Instantiate a counter to keep track of which line is being built
    int myLine = 1;

    // Loop to assemble block patterns
    for (myLine = 1; myLine <= myHeight; myLine++)
    {
        // Loop assembles first half of line
        for (int i = 1; i <= myHeight - myLine; i++)
        {
            printf(" ");
        }
        for (int a = 1; a <= myLine; a++)
        {
            printf("#");
        }
        
        // Loop assembles second half of line
        printf("  ");
        for (int a = 1; a <= myLine; a++)
        {
            printf("#");
        }
        printf("\n"); 
    
    }
}
