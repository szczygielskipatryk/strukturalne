#include<stdlib.h>
#include<stdio.h>
void dodaj(int * cos);
void usun(int * cos);
int rozmiar=1;
int main()
{
    int * tablica;

    tablica = (int*)malloc(rozmiar*sizeof(int));
    tablica[rozmiar-1]=2;
    int wybor;
    int i;
    while (1)
    {
        printf("\nPodaj opcje:\n 1 dodaje element do kolejki\n 2 usuwa element z kolejki\n 3 wyswietla kolejke \n4 wyjscie\n");
     scanf("%d",&wybor);
     switch (wybor)
     {
     case 1:
        dodaj(tablica);
        break;
     case 2:
         if(rozmiar!=0)
         {
          usun(tablica);
         }
         else
         {
             printf("\nKolejka pusta\n");
             exit(15);
         }
        break;
     case 3:

        for(i=0;i<rozmiar;i++)
    {
        printf("%d ",tablica[i]);
    }
    break;
     case 4:
        exit(1);
        break;
     default:
        printf("Naucz sie czytac :P\n");

        }
     }



    free(tablica);
    return 0;
}
void dodaj(int * cos)
{
    rozmiar=rozmiar+1;
    cos =realloc(cos,rozmiar*sizeof(int));
    int co;
    scanf("%d",&co);
    cos[rozmiar-1]=co;
}
void usun(int * cos)
{
	rozmiar=rozmiar-1;
	int n;
	for (n=0;n<=rozmiar;n++)
	{
	
    	cos[n]=cos[n+1];
}

cos=realloc(cos,rozmiar*sizeof(int));
}


