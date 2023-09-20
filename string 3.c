#include<stdio.h>
int main()
{
    char str1[]="Hello";
    char str2[]="mar";
   strncpy(str1,str2,3);
   puts(str1);
}
