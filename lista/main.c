#include <stdio.h>
#include <stdlib.h>
int rozmiar=1;
const int max_rozm=10;
int sprawdz_rozm();
void add_lista(int **lista,int indeks);
void remove_lista(int **lista,int indeks);
void wyswietl(int * lista);
int main()
{
    int *lista=(int*)malloc(sizeof(int)*rozmiar);
    lista[0]=2;
    int wybor;
    int indeks,indeks2;
    while(1)
    {
        printf("\n1-dodaj, 2-usun,3wyswietl,4-wyjdz\n");
        scanf("%d",&wybor);
        switch(wybor)
        {
        case 1:

            printf("Podaj na jakiej pozycji chchesz dodac liczbe: ");
            scanf("%d",&indeks);
            add_lista(&lista, indeks);
            break;
        case 2:
            printf("Podaj z jakiej pozycji chchesz usunac liczbe: ");
            scanf("%d",&indeks2);
            remove_lista(&lista,indeks2);
            break;
        case 3:
            wyswietl(lista);
            break;
        case 4:
            free(lista);
            return 0;
        default:
            printf("\nBrak takiej opcji\n");
            break;
        }

    }
}
int sprawdz_rozm()
{
    if(rozmiar>max_rozm-1)
    {
        return 1;
    }
    return 0;
}
void add_lista(int **lista,int indeks)
{
    if(sprawdz_rozm()==0)
    {
        rozmiar=rozmiar+1;

        if(indeks>rozmiar)
        {
            printf("\nNie ma takiego indeksu\n");
        }
        else
        {

        int *tmp;
        tmp=realloc(*lista,rozmiar*sizeof(*lista));
        if(tmp==NULL)
        {
            printf("Blad alokacji");
            exit(1);
        }
        *lista=tmp;
        int i;
        for(i=rozmiar-1;i>=indeks;i--)
        {
            (*lista)[i]=(*lista)[i-1];
        }
        int var;
        scanf("%d",&var);
        (*lista)[indeks-1]=var;
        printf("\nDodales: %d na pozycje %d",var,indeks);

    }
    }
    else
        {
        printf("Lista pelna");
        }
}
void wyswietl(int *lista)
{
    int i;
    printf("Lista to: ");
    for(i=0;i<rozmiar;i++)
    {
        printf("|%d",lista[i]);
    }
    printf("\n");
}
void remove_lista(int **lista,int indeks)
{
    if(rozmiar>0)
    {

        if(indeks>rozmiar)
        {
            printf("\nNie ma takiego indeksu\n");
        }
        else
        {

            int *tmp;
            int pomoc=(*lista)[indeks-1];
            int i;
            for(i=indeks;i<rozmiar;i++)
            {
                (*lista)[i-1]=(*lista)[i];
            }

            tmp=realloc(*lista,rozmiar*sizeof(*lista));
            if(tmp==NULL)
            {
                printf("\nBlad alokacji\n");
                exit(1);
            }
            *lista=tmp;
            rozmiar=rozmiar-1;
            printf("\nUsuneles %d z pozycji %d",pomoc,indeks);

        }
    }
    else
        {
        printf("\nLista pusta\n");
        }
}

