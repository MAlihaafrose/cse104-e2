#include<stdio.h>
int main()

{
    int i,j,k;
    k=0;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=5;j++)
        {
            k++;
            printf("*");
        }
        printf("\n");
    }
}
