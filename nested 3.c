#include<stdio.h>
int main()
{
    int i,j,k;
    scanf("%d",&k);
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf(" %10d",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}
