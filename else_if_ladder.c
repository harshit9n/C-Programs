#include<stdio.h>
int main()
{
    int digit;
    printf("enter your no. to check divisibilty \n");
    scanf ( "%d", &digit);

    if (digit%2==0)
    {
        printf("your no. is divisible by 2 \n");
    }
    else if  (digit%3==0)
    {
        printf("your no. is divisible by 3 \n");
    }
    else if(digit%5==0)
    {
        printf("your no. is divisible by 5 \n");
    }
    else if (digit%7==0)
    {
        printf("your no. is divisible by 7\n");
    }
    else if (digit%11==0)
    {
        printf("your no. is divisible by 11\n");
    }
    else if (digit%13==0)
    {
        printf("your no. is divisible by 13 \n");
    }
    else if (digit%17==0)
    {
        printf("your no. is divisible by 17\n");
    }
    else
    {
        printf("your no. is divisible by divided by another no. else then 2,3,5,7,11,13,17 \n");
    }
    
    return 0;
}