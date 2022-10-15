// Write a program to implement machine that accepts all strings over 
// input symbols {0,1} which are divisible by 3.

#include <stdio.h>

int main()
{
    char input[15], x;
    int state = 0, i = 0, j = 0;

    printf("Enter the string:");
    gets(input);

    while (input[i] != '\0')
    {
        x = input[i];
        //cases for checking the states
        switch (state)
        {
        case 0:
            if (x == '0' || x == '1')
            {
                state = 1;
            }
            else
                j++;
            break;
        case 1:
            if (x == '0' || x == '1')
            {
                state = 2;
            }
            else
                j++;
            break;
        case 2:
            if (x == '0' || x == '1')
            {
                state = 0;
            }
            else
                j++;
            break;
        }
        i++;
    }
    if (j > 0)
    {
        printf("Invalid input character in string found:");
    }

    if (state == 0)
    {
        printf("Valid input, String Accepted\n");
    }
    else
    {
        printf("Invalid input, String Rejected\n");
    }
    
    return 0;
}