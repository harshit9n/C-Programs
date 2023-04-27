#include<stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3]={{0,0,0},{0,0,0},{0,0,0}},i,j,k;
    printf("Enter the first matrix\n");
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("enter a%d%d\n",i+1,j+1);
            scanf("%d", &a[i][j]);
        }
        
    }
    printf("Enter the Second matrix\n");
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("enter a%d%d\n",i+1,j+1);
            scanf("%d", &b[i][j]);
        }
        
    }
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                c[i][j]= a[i][k]*b[k][j]+c[i][j];
            }
        }
    }
    printf("Matrix is given by :\n");
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d \n",c[i][j]);
        }
        
    }
    return 0;
}
