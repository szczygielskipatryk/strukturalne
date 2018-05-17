#include<stdlib.h>
#include<stdio.h>
void dodaj(int * cos);
void usunpierwszy(int * cos);
void usunostatni(int *cos);
void dodajpoczatek(int * cos);
void dodaj_po_indeks(int * cos, int indeks);
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
        printf("\nPodaj opcje:\n 1 dodaje element na koncu listy\n 2 dodaj element na poczatku listy \n 3 usuwa element z poczatku listy\n 4 usuwa element na koncu listy \n 5 wyswietla liste \n 6 wyjscie \n 7 dodawanie po indeksie \n");
     scanf("%d",&wybor);
     switch (wybor)
     {
     case 1:
        dodaj(tablica);
        break;
    case 2:
    	dodajpoczatek(tablica);
    	break;
     case 3:
         if(rozmiar!=0)
         {
          usunpierwszy(tablica);
         }
         else
         {
             printf("\nlista pusta\n");
             exit(15);
         }
        break;
     case 4:
     	if(rozmiar!=0)
     	{
     	usunostatni(tablica);
		 }
		 else
		 {
		 	printf("\nPusto\n");
		 	exit(16);
		 }
		 break;
     case 5:
     	printf("==================================================================\n");
     	printf("Elementy tablicy to: ");

        for(i=0;i<rozmiar;i++)
    {
        printf("%d ",tablica[i]);
    }
    printf("\n==================================================================\n");
    break;
     case 6:
        goto koniecpetli;
        break;
    case 7:
    	printf("Podaj na ktorej pozycji chcesz dodaæ liczbe: ");
    	int indeks;
    	scanf("%d",&indeks);
    	dodaj_po_indeks(tablica,indeks-1);
    	break;
     default:
        printf("Naucz sie czytac :P\n");
		break;
        }
     }
koniecpetli:;


    free(tablica);
    getch();
    return 0;
}
void dodaj(int * cos)
{
    rozmiar=rozmiar+1;
    if(rozmiar==1)
    {
    	cos=(int*)malloc(rozmiar*sizeof(int));
	}
	else
	{
    cos =realloc(cos,rozmiar*sizeof(int));
	}	
    int co;
    scanf("%d",&co);
    cos[rozmiar-1]=co;
}
void usunpierwszy(int * cos)
{
	rozmiar=rozmiar-1;
	int n;
	for (n=0;n<=rozmiar;n++)
	{
	
    	cos[n]=cos[n+1];
}

cos=realloc(cos,rozmiar*sizeof(int));
}
void usunostatni(int * cos)
{
    rozmiar=rozmiar-1;
    cos=realloc(cos,rozmiar*sizeof(int));
}
void dodajpoczatek(int * cos)
{
    rozmiar=rozmiar+1;
    if (rozmiar==1)
    {
    	cos=(int*)malloc(rozmiar*sizeof(int));
	}
	else
	{
    cos =realloc(cos,rozmiar*sizeof(int));
	}
	int i;
    for(i=rozmiar-1;i>=0;i--)
    {
    	cos[i+1]=cos[i];
	}
 
    int co;
    scanf("%d",&co);
    cos[0]=co;
}
void dodaj_po_indeks(int * cos,int indeks)
{
	zmienna1:;
	rozmiar=rozmiar+1;
	if(indeks>rozmiar)
	{
		printf("Nie ma takiego indeksu");
		abort;
	}
	else{
	cos=realloc(cos,rozmiar*sizeof(int));
	int i;
	for(i=rozmiar-1;i>=indeks;i--)
	{
		cos[i+1]=cos[i];
	}
	int tmp;
	scanf("%d",&tmp);
	cos[indeks]=tmp;
	}}
