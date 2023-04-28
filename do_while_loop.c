#include<stdio.h>
int main()
{
    int number;
    printf("enter the no. you want to start ");
    scanf ("%d" , &number);

    do {
        printf("%d \n" , number++);
    }
    while (number<=100);
    number++;


    return 0;
}