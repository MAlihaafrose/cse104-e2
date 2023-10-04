#include<stdio.h>
int findPrime(int x)
{
    int i;
    if(x==1)
    {
        return 0;
    }
    for(i=2; i*i<=x; i++)
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    return 1;

}

void nthPrime(int x)
{
    int count = 0;
    int start = 2;
    while (1)
    {
        if (findPrime(start))
        {
            count++;
            if (count == x)
            {
                printf("%dth prime is %d\n",x, start);
                return;
            }
        }
        start++;
    }

}
void printPrime(int a,int b)
{
    int i;
    for(i=a;i<=b;i++)
    {
        if(findPrime(i))
        {
            printf("%d\n",i);
        }
    }


}


int main()
{
    int i,a,b;
    printf("Enter the start of the range:\n",a);
    scanf("%d",&a);
    printf("Enter the end of the range:\n",b);
    scanf("%d",&b);
    printPrime(a,b);


}
