#include<stdio.h>
int main()
{
    long long int n;
    int i,t;
    scanf("%d",&t);
    for(i=1; i<=t; i++)


    {
        scanf("%lld",&n);
        if(n%4==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
