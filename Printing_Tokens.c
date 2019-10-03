//Program is written by Nirbhay Kaushik

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char s[1000];
    int len,i;
    scanf("%[^\n]", s);
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]==' ')
            printf("\n");
        else
            printf("%c",s[i]);
    }
    return 0;
}
