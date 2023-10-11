POSITIVE,NEGATIVE,EVEN,ODD

#include<stdio.h>
int main()
{int i,p=0,n=0,e=0,o=0,r;
for(i=1;i<=5;i++)
{scanf("%d",&r);
if(r>0)
p++;
else if(r<0)
n++;
if(r%2==0)
e++;
else
o++;
}
printf("%d valor(es) par(es)\n",e);
printf("%d valor(es) impar(es)\n",o);
printf("%d valor(s) positivo(es)\n",p);
printf("%d valor(s) negativo(es)\n",n);
return 0;
}
