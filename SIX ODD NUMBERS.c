SIX ODD NUMBERS

#include<stdio.h>
int main()
{int i,n;
scanf("%d",&n);
if(n%2==0)
n++;
for(i=1;i<=6;i++)
{printf("%d\n",n);
n+=2;
}
return 0;}