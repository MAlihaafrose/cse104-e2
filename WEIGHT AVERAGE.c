WEIGHT AVERAGE

#include<stdio.h>

int main()
{
    int i,t;
    float m,r,s,total,avg;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
    scanf("%f",&m);
   scanf("%f",&r);
  scanf("%f",&s);
  total=m*2.0+r*3.0+s*5.0;
  avg=total/10.0;
printf("%.1f\n",avg);}
return 0;
}
