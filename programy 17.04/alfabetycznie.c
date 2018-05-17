#include<stdio.h>
#include<string.h>
int main(){
   int i,j,count;
   char str[25][25],temp[25];
   puts("Ile wyrazow chcesz podac?:  ");
   scanf("%d",&count);

   puts("podaj wyrazy jeden po drogim: ");
   for(i=0;i<=count;i++)
      gets(str[i]);
   for(i=0;i<=count;i++)
      for(j=i+1;j<=count;j++){
         if(stricmp(str[i],str[j])>0){
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
         }
      }
   printf("wyrazy posortowane alfabetycznie: ");
   for(i=0;i<=count;i++)
      puts(str[i]);

   return 0;
}
