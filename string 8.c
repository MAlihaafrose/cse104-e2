#include<stdio.h>
int main()
{
    char str1[]="wow";

   char str2[]="strrev(str1)";
   int a=strcmp(str1,str2);
   if(a==0)
   {
       printf("pelindrom");

   }
   else
   {
       printf("not pelindrom");
   }
}
