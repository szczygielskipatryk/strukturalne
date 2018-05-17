#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sort(char str[]);
int main()
{
    int i;
   char wer [1000];
   char wer2[1000];
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
