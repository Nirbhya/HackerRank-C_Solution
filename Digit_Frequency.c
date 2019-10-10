//Program Written By Nirbhay Kaushik

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int count[10],i;
    char str[1000];
    scanf("%s",&str);
    for(i=0;i<10;i++)
      count[i]=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=48 && str[i]<=57)
        {
            count[str[i]-48]+=1;
        }
    }
    for(i=0;i<10;i++)
     printf("%d ",count[i]);
    return 0;
}
