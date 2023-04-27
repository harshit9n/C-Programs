#include<stdio.h>
void change(int b);
int main()
{
    int a=20;
    printf("the value of A before change is %d", a);
    change(20);
    printf("the value of A After change is %d", a);
    return 0;
}

void change(int b)
{
    b =55;
    return 0;
}