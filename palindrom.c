#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int palindrom(char tab[]);
int main()
{
    char tab[1000];
    scanf("%s",&tab);
    if(palindrom(&tab)==1)
    {
    printf("Jest palindromem\n");
    }
    else{printf("Nie jest palindromem\n");}
   return 0;
}
   int palindrom(char tab[])
   {
int i;
int j=strlen(tab);
       for(i=0;i<j;i++)
       {

       if(tab[i]!=tab[j-i-1])
       {
          return 0;

       }
 return 1;
   }
   }




