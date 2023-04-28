#include<stdio.h>
int main()
{
    int number;
    printf("enter the no. to check divsible by 57\n");
    scanf ("%d" , &number);

    (number%57==0) ? printf("your no. is divisible by 57 \n") : printf("your no. is not divisiblew by 57 \n");
    return 0;
}