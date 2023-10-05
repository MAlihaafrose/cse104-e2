#include<stdio.h>
int main()
{
    int i, V,A,B,C;
    scanf("%d",&V);
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    while(V>=0)
    {
        if(V<A)
           {
               printf("F\n");
       break;
           }
           else
           {
               V-A;
           }
         if(V-A<B)
           {
               printf("M\n");
            break;
           }
           else
           {
               V-A-B;
           }
        if(V-A-B<C)
            {
                printf("T\n");
            break;
            }
            V=V-A-B-C;
    }
    return 0;
}
