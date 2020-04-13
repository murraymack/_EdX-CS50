#include <cs50.h>
#include <stdio.h>

int main(void)

{
    long myCard;
    long myCard2;
    myCard = get_long("Enter credit card number: ");
    myCard2 = myCard;

// Instantiate digit placeholders for later
    int digit_1 = 0; int digit_2 = 0; int digit_3 = 0; int digit_4 = 0;
    int digit_5 = 0; int digit_6 = 0; int digit_7 = 0; int digit_8 = 0;
    int digit_9 = 0; int digit_10 = 0; int digit_11 = 0; int digit_12 = 0;
    int digit_13 = 0; int digit_14 = 0; int digit_15 = 0; int digit_16 = 0;
    int digit_17 = 0; int digit_18 = 0; int digit_19 = 0; int digit_20 = 0;

// This loop gathers each 
    int loopSet; // value which stores the length of myChar
    while (myCard2 > 0)
    {
        int mod = myCard2 % 10; // value of current digit
        myCard2 = myCard2 / 10;
        loopSet = loopSet + 1; // Now we know how many times to loop through the card value for each digit operation
    }
    
    myCard2 = myCard; // Reset myCard2 value
    int loopSetCounter = loopSet;
    while (loopSetCounter > 0) // determine each digit at each position
    {
        int mod = myCard2 % 10; // value of current digit
        myCard2 = myCard2 / 10;
        loopSet = loopSet + 1;
        //printf("loopSet - loopSetCounter + 1: %d\n", (loopSet - loopSetCounter));
        switch(loopSetCounter)
        {
            case  1: { digit_1  = mod; break; }
            case  2: { digit_2  = mod; break; }
            case  3: { digit_3  = mod; break; }
            case  4: { digit_4  = mod; break; }
            case  5: { digit_5  = mod; break; }
            case  6: { digit_6  = mod; break; }
            case  7: { digit_7  = mod; break; }
            case  8: { digit_8  = mod; break; }
            case  9: { digit_9  = mod; break; }
            case 10: { digit_10 = mod; break; }
            case 11: { digit_11 = mod; break; }
            case 12: { digit_12 = mod; break; }
            case 13: { digit_13 = mod; break; }
            case 14: { digit_14 = mod; break; }
            case 15: { digit_15 = mod; break; }
            case 16: { digit_16 = mod; break; }
            case 17: { digit_17 = mod; break; }
            case 18: { digit_18 = mod; break; }
            case 19: { digit_19 = mod; break; }
            case 20: { digit_20 = mod; break; }
        } // End switch
        loopSetCounter = loopSetCounter - 1;
    } // End while
    
    // Now all of our digits are stored in their respective positions
    
    if ((loopSet/2) % 2 == 0)
    {
    printf("loopset: %d\n",loopSet);
    int multiply2 = 2 * (digit_1 + digit_3 + digit_5 + digit_7 + digit_9 + digit_11 + digit_13 + digit_15 + digit_17 + digit_19);
    int other = digit_2 + digit_4 + digit_6 + digit_8 + digit_10 + digit_11 + digit_12 + digit_14 + digit_16 + digit_18 + digit_20;
    printf("case 1 multiply2 + other: %d\n", multiply2 + other);
    }

    if ((loopSet/2) % 2 != 0)
    {
    printf("loopset: %d\n",loopSet);
    int multiply2 = 2 * (digit_1 + digit_3 + digit_5 + digit_7 + digit_9 + digit_11 + digit_13 + digit_15 + digit_17 + digit_19);
    int other = digit_2 + digit_4 + digit_6 + digit_8 + digit_10 + digit_11 + digit_12 + digit_14 + digit_16 + digit_18 + digit_20;
    printf("case 2 multiply2 + other: %d\n", multiply2 + other);
    }

}