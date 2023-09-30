#include<stdio.h>
int main()
{
    double a,b,c,temp,r,s,t;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    if(a<b){temp=a;a=b;b=temp;}
    if(a<c){temp=a;a=c;c=temp;}
    if(b<c){temp=b;b=c;c=temp;}
    r=a*a;
    s=b*b;
    t=c*c;
    if(a>=b+c)printf("NAO FORMA TRIANGULO\n");
    else
    {
        if(r==s+t)printf("TRIANGULO RETANGULO\n");
        if(r>s+t)printf("TRIANGULO OBTUSANGULO\n");
        if(r<s+t)printf("TRIANGULO ACUTANGULO\n");
        if(a==b&&b==c)printf("TRIANGULO EQUILATERO\n");
        else if(a==b||b==c||c==a)printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
