#include <stdio.h>

const int r = 1000000007;

long long Pow(int x, int y)
{
	if(y==0)
		return 1;
	if(y==1)
		return x;
	if(y%2==0)
		return (Pow(x,y/2)*Pow(x,y/2))%r;
	else
		{
			long long val1 = x;
			long long val2 = (Pow(x,y/2)*Pow(x,y/2))%r;

			return (val1*val2)%r;
		}
}

int main(void) {

	int i,t;
	scanf("%d", &t);

	for(i=1;i<=t;i++)
        {
		int a,b;
		scanf("%d %d", &a, &b);
		printf("%lld\n", Pow(a,b));
	}
}
