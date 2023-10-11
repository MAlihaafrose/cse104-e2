SUM OF CONSECUTIVE ODD NUMBERS

#include<stdio.h>

int main()
{
    int i,j,t,temp,a,b,x=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
    scanf("%d",&a);
   scanf("%d",&b);
   if(a>b)
   {temp=a;
   a=b;
   b=temp;}
   if(a%2==0)
   a--;
   a+=2;
   for(j=a;j<b;j+=2)
   {x+=j;}
   printf("%d\n",x);
   x=0;
    }

return 0;
}
