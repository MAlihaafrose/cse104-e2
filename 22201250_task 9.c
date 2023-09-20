#include<stdio.h>
#include<string.h>
int main()
{
    char alphabet[52];
    int i,NumberOfVowel=0;
   fgets(alphabet,sizeof(alphabet),stdin);

    for(i=0;i<strlen(alphabet);i++)
    {
        char ch = alphabet[i];
        if(ch =='A'|| ch =='a'|| ch =='E'|| ch =='e'|| ch =='I'|| ch =='i'|| ch =='O'||ch =='o'|| ch =='U'|| ch =='u')
            NumberOfVowel++;
    }
    printf("%d",NumberOfVowel);
    return 0;
}
