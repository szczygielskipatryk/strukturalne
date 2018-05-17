#include <stdlib.h>
#include <stdio.h>
//kolejka
void push(int * cos);
void pop(int * cos);
void wyswietl(int * cos);
int rozmiar=4;
int rozmiar_max=5;
int main()
{
	int * tablica;
	tablica=(int*)malloc(rozmiar*sizeof(int));
	tablica[0]=0;
	tablica[1]=0;
	tablica[2]=0;
	tablica[3]=0;
	wyswietl(tablica);
	push(tablica);
	wyswietl(tablica);
	push(tablica);
	wyswietl(tablica);
	push(tablica);
	wyswietl(tablica);
	pop(tablica);
	wyswietl(tablica);
	pop(tablica);
	wyswietl(tablica);
	pop(tablica);
	wyswietl(tablica);
	push(tablica);
	wyswietl(tablica);
	printf("Wynik koncowy to: ");
	wyswietl(tablica);
	free(tablica);
	getch();
	return 0;

	
}
void push(int * cos)
{
	rozmiar=rozmiar+1;
	if(rozmiar>rozmiar_max)
	{
		printf("Maksymalny rozmial tablicy osi¹gniety");
		exit(0);
	}
	int * tmp;
	int i;
	tmp=realloc(cos,rozmiar*sizeof(int));
	if(tmp==NULL)
	{
		printf("blad alokacji pamieci");
		exit (0);
	}
	else
	{
		int var;
		scanf("\n%d",&var);
		cos[rozmiar-1]=var;
	}
}
void pop(int * cos)
{
	rozmiar=rozmiar-1;

	int i;
	int * tmp;
	for(i=0;i<rozmiar;i++)
	{
		cos[i]=cos[i+1];
	}
	tmp=realloc(cos,rozmiar*sizeof(int));
	if(tmp==NULL)
	{
		printf("Blad alokacji pamieci");
		exit (0);
	}
	else
	{
		cos=tmp;
	}
}
void wyswietl(int * cos)
{
	int i;
	printf("\n");
	for(i=0;i<rozmiar;i++)
	{
		printf("%d ",cos[i]);
	}
	printf("\n");
}
