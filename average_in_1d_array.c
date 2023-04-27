#include<stdio.h>
int main()
{
    int arr[5]={12,34,22,54,23};
    int i,sum=0;
    float avg;
    for(i=0;i<5;i++)
    {
       sum=sum+arr[i];
    }
    avg=sum/5;
    printf("average is %d",avg);
    return 0;
}