#include<stdio.h>
#include<math.h>
int main()
{
    double n,m,a,i,j,ans;
    scanf("%lf",&n);
    scanf("%lf",&m);
    scanf("%lf",&a);
    i=ceil(n/a);
    j=ceil(m/a);
    ans=i*j;
    printf("%.0lf\n",ans);

     return 0;
}
