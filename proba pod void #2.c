#include <stdio.h>
#include <stdlib.h>
int rozmiar=1;
void dodaj(void* ** cos,void* co);
void usun(void* **cos);
const int maks_rozm=11;
int sprawdzenie();

int main()
{
    void* *tablica=(void* *)malloc(rozmiar*sizeof(tablica));
    tablica[0]=(void*)14;
    dodaj(&tablica,(void*)'k');
    dodaj(&tablica,(void*)325);
    dodaj(&tablica,(void*)'y');
    dodaj(&tablica,(void*)'p');
    usun(&tablica);
    int i;
    for(i=0;i<rozmiar;i++)
    {
        printf("%x|",tablica[i]);
    }
    free(tablica);
    return 0;
}
int sprawdzenie()
{
    if(rozmiar>maks_rozm-1)
    {
        return 1;
    }
    return 0;
}
void dodaj(void* **cos,void* co)
{
   if(sprawdzenie()==0)
   {
        rozmiar=rozmiar+1;
        void* *tmp;
        tmp=realloc(*cos,rozmiar*sizeof(cos));
        if(tmp==NULL)
        {
            printf("\nBlad alokacji\n");
            exit(1);
        }
        *cos=tmp;
        (*cos)[rozmiar-1]=co;
    }
else
{
    printf("\nStos pelny\n");
}
}
void usun(void* **cos)
{
    rozmiar=rozmiar-1;
    void* *tmp;
    tmp=realloc(*cos,rozmiar*sizeof(cos));
    if(tmp==NULL)
    {
        printf("Blad alokacji");
        exit(2);
    }
    *cos=tmp;

}
