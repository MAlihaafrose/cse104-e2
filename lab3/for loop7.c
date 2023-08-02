#include<stdio.h>
int main()
{
    int i=0;
    for( ; ;)
    {
        printf("%d",i++);
        if(i>100)
        {
            break;
        }
    }
}
