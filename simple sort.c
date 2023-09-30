#include<stdio.h>
int main()
{
    int a,b,c,r,s,t,temp;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    r=a;
    s=b;
    t=c;
    if(a>b){temp=a;a=b;b=temp;}
    if(a>c){temp=a;a=c;c=temp;}
    if(b>c){temp=b;b=c;c=temp;}
    printf("%d\n%d\n%d\n",a,b,c);
    printf("\n");
    printf("%d\n%d\n%d\n",r,s,t);
     return 0;
}
