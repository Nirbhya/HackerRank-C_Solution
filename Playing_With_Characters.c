//Program is written by Nirbhay Kaushik

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

   char ch;
   char s[100];
   char sen[100];
    scanf("%c",&ch);
    scanf("%s",&s);
    scanf("%[^\t]%*c",sen);
    printf("%c\n",ch);
    printf("%s",s);
    printf("%s",sen);
    return 0;
}
