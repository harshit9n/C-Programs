#include<stdio.h>
int main()
{
    int a,b,sum,sub,mult;
    float div;
    printf("Enter the two numbers\n");
    scanf("%d %d" ,&a ,&b);
    printf("the sum of given numbers is %d\n",sum=a+b);
    printf("the subtration of given numbers is %d\n",sub=a-b);
    printf("the multiplication of given numbers is %d\n",mult=a*b);
    printf("the division of given numbers is %f\n",div=a/(float)b);
    return 0;
}