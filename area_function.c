#include<stdio.h>
int area(int a, int b);
int main()
{
    int a,b;
    int res;
    printf("Enter the value of Length\n");
    scanf("%d",&a);
    printf("Enter the value of Breath\n");
    scanf("%d",&b);
    res=area(a,b);
    printf("Your area is %d Sq. unit \n",res);
    return 0;
}
int area(int a, int b){
    int c;
    c=a*b;
    return c;
}