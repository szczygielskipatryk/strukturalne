#include<stdlib.h>
#include<stdio.h>
#define LIMIT 3
void dodaj(int ** cos);
void usun(int ** cos);
int rozmiar=1;
int main()
{
    int * tablica;
    tablica = (int*)malloc(rozmiar*sizeof(int));
    tablica[0]=2;
    int wybor;
    int i;
    while (1)
    {
        printf("\nPodaj opcje:\n 1 dodaje element do kolejki\n 2 usuwa element z kolejki\n 3 wyswietla kolejke \n4 wyjscie\n");
     scanf("%d",&wybor);
     switch (wybor)
     {
     case 1:
        dodaj(&tablica);
        break;
     case 2:
         if(rozmiar!=0)
         {
          usun(&tablica);
         }
         else
         {
             printf("\nSTOS PUSTY\n");
             exit(15);
         }
        break;
     case 3:
    printf("Twoj stos to: ");
        for(i=0;i<rozmiar;i++)
    {
        printf("%d ,",tablica[i]);
    }
    break;
     case 4:
        return 0;
     default:
        printf("Naucz sie czytac :P\n");

        }
     }


    free(tablica);
    return 0;
}
void dodaj(int ** cos)
{
    rozmiar=rozmiar+1;
    int tmp=*cos;
    tmp =realloc(*cos,rozmiar*sizeof(int));
    {
        if(tmp==NULL)
        {
            printf("Blad alokacji :C\n");
            exit(1);
        }
        else
        {
            *cos=tmp;
        }
    }
    int co;
    scanf("%d",&co);
    *(*cos+rozmiar -1) =co;
    printf("Wlasnie dodales: %d",co);
}
void usun(int ** cos)
{
    int pierwsza;
    pierwsza=*(*cos);
    int i;
    for(i=0;i<rozmiar;i++)
    {
        (*cos)[i]=(*cos)[i+1];
    }

    int tmp=*cos;
    tmp=realloc(*cos,rozmiar*sizeof(int));
    if(tmp==NULL)
    {
        printf("Blad alokacji:C\n");
        exit(1);
    }
    else
    {
        *cos=tmp;
    }
    printf("Wlasnie usunales: %d",pierwsza);
    rozmiar=rozmiar-1;
}
