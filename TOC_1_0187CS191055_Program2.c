// Write a Program to implement a machine which accepts all strings of 0's and 1's
// where string should starts and end with '0'

#include <stdio.h>
#include <stdlib.h>

#define MAX 20

int main()
{
    char str[MAX], ch;
    int i, state = 0, flag = 0;

    printf("Enter the String: ");
    gets(str);

    i = 0;
    while (str[i] != '\0')
    {
        ch = str[i];

        switch (state)
        {
        case 0:
            if (ch == '0')
            {
                state = 1;
            }
            else if (ch == '1')
            {
                state = 2;
            }
            else
            {
                flag++;
                break;
            }

            break;

        case 1:
            if (ch == '0')
            {
                state = 1;
            }
            else if (ch == '1')
            {
                state = 3;
            }
            else
            {
                flag++;
                break;
            }
            break;

        case 2:
            if (ch == '0' || ch == '1')
            {
                state = 2;
            }
            else
            {
                flag++;
                break;
            }
            break;
        case 3:
            if (ch == '0')
            {
                state = 1;
            }
            else if (ch == '1')
            {
                state = 3;
            }
            else
            {
                flag++;
                break;
            }
            break;
        }
        i++;
    }

    if (flag == 0)
    {
        if (state == 1)
        {
            printf("String Accpted, It is a valid String.\n");
        }
        else
        {
            printf("String not Accpted, It is an invalid String.\n");
        }
    }
    else
    {
        printf("String not Accepted, An invalid character found in th String.\n");
    }

    return 0;
}