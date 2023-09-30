#include<stdio.h>
int main()
{ int a,b,c,max;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
max = a;
if((a<b)||(a<c))
{
    if(b<c)
    {
        max = c;
    }
    else
        {
            max = b;

}

}
   printf("%d eh o maior\n",max);

return 0;}


