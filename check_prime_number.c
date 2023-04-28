#include<stdio.h>
int main()
{
    int i=2;
    int prime = 0;
    int number;

    
    printf("enter the no. you want to check \n");
    scanf("%d", &number);

    for(i=2; i<number ; i++)
    {
        if (number%i==0 && i!=2)
        {
            prime=1;
            break;
        }
    }
    if(prime==1)
    {
        printf("your no. %d is not prime \n" , number);
    }

    else {
        printf("your no. %d is prime \n" , number);  
    }
    return 0;
}