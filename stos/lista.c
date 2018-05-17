#include <stdlib.h>
#include <stdio.h>
void dodaj_indeks(int * cos,int indeks);
void usun_indeks(int * cos, int indeks);
void wyswietl(int * cos);
int rozmiar=1;
int main()
{
	int * tablica;
	tablica=(int*)malloc(rozmiar*sizeof(int));
	tablica[0]=2;
	dodaj_indeks(tablica,1);
	wyswietl(tablica);
	dodaj_indeks(tablica,1);
	wyswietl(tablica);
	usun_indeks(tablica,0);
	printf("\n");
	wyswietl(tablica);
	free(tablica);
	getch();
	return 0;
	}
void dodaj_indeks(int * cos, int indeks)
{
	rozmiar=rozmiar+1;
	int i;
	int * tmp;
	tmp=realloc(cos,sizeof(int));
	if(indeks>rozmiar)
	{
		printf("Nie ma takiego indeksu w tablicy");
		exit(0);
	}
	if(tmp==NULL)
	{
		printf("Blad alokacji pamieci\n");
		exit(0);
	}
	else
	{
		cos=tmp;
		for(i=rozmiar-1;i>=indeks;i--)
		{
			cos[i+1]=cos[i];
		}
		int var;
		scanf("%d",&var);
		cos[indeks]=var;
	
	}
}
void usun_indeks(int * cos, int indeks)
{
	rozmiar=rozmiar-1;
	int i;
	if(indeks>rozmiar-1)
	{
		printf("Brak takiego indeksu\n");
		exit(0);
	}
	for (i=indeks;i<rozmiar;i++)
	{
		cos[i]=cos[i+1];
	}
	int * tmp;
	tmp=realloc(cos,sizeof(int));
	if(tmp==NULL)
	{
		printf("Blad alokacji pamieci\n");
	}
	else
	{
		cos=tmp;
	}
	
}
void wyswietl(int * cos)
{
	int i;
	for(i=0;i<rozmiar;i++)
	{
		printf("%d ",cos[i]);
	}
}
