#include<stdio.h>
int main()
{
    int m,r,s,t,a,T=0;
    scanf("%d",&m);
    for(a=1;a<=m;a++)
    {
        scanf("%d",&r);
        scanf("%d",&s);
        scanf("%d",&t);
        if((r==1&&s==1)||(s==1&&t==1)||(r==1&&t==1))
            {
                T++;
            }
    }
    printf("%d\n",T);
    return 0;

}
