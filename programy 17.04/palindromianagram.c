#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sort(char str[]);
int palindrom(char tab[]);
int main()
{
    int i;
    char wer [1000];
    char wer2[1000];
    char tab[1000];
    puts("Podaj wyraz: ");
    scanf("%s",&tab);
    if(palindrom(&tab)==1)
    {
        printf("Jest palindromem\n");
    }
    else
    {
        printf("Nie jest palindromem\n");
    }
   printf("Podaj wyraz\n");
   scanf("%s",wer);
   printf("Podaj 2 wyraz\n");
   scanf("%s",wer2);
	if(strlen(wer)!=strlen(wer2))
   {
       printf("Slowa roznych rozmiarow");
   }
   sort(wer);
   sort(wer2);
   if(stricmp(wer,wer2)==0)
   {
       printf("\nSa to anagramy");
   }
   else
   {
       printf("\nTo nie sa anagramy");
   }
return 0;
}
void sort(char str[])
{

	int i,j,temp;
	int len = strlen(str);
	for(i=0; i<len; i++)
    {
		for(j=0; j< len; j++)
            {
			if( str[i]>str[j])
                {
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
}}}
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
