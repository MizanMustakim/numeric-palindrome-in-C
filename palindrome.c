#include <stdio.h>
#include <stdlib.h>

int numpal(int number, int reverseDigit)
{
    if (number == 0)
        return reverseDigit;
    reverseDigit = (reverseDigit * 10) + (number % 10);

    return numpal(number / 10, reverseDigit);
}
int main()
{
    int number, i;
    for (i = 0; i < 5; i++)
    {
        printf("\n    Enter the numeric value: ");
        scanf("%d", &number);
        int reverseDigit = numpal(number, 0);
        if (reverseDigit == number)
            printf("    Numeric Palindrome status: 1\n");
        else
            printf("    Numeric Palindrome status: 0\n");
    }

    return 0;
}
