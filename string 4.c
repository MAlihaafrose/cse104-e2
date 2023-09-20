#include<stdio.h>
int main()
{
    char str1[]="hello";
    char str2[]="world";
    char str3[]="mrts";
    strncpy(str3,str1,2);
    strncat(str3,str2,2);
    puts(str3);
}
