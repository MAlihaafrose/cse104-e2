#include<stdio.h>
int main()
{
    long long int X;
    int a,m;
    scanf("%d",&m);

    for(a=1;a<=m;a++)
    {
        scanf("%lld",&X);
       if(X%5==0)
       {

           printf("%d\n",X/5);
       }
       else
       {

           printf("%d\n",(X/5)+1);
       }
    }
    return 0;
    }
