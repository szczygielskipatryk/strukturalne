#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
char imie[100];
char nazwisko [100];
char *men="Mezczyzna";
char *kob="Kobieta";
char plec[strlen(men+1)];
double wzrost;
int pesel[11];
char zmienna[1];
int i;
int kolom;
    puts("Podaj imie: ");
    gets(imie);
    puts("Podaj nazwisko: ");
    gets(nazwisko);
    puts("Podaj plec (M- mezczyzna, K- kobieta): ");
    scanf("%s",zmienna);
    if(zmienna[0]=='M'||zmienna[0]=='m')
    {
        kolom=1;
    }
    else if(zmienna[0]=='K'||zmienna[0]=='k')
    {
        kolom=2;
    }
    else
    {
        kolom=3;
    }

    switch(kolom)
    {
    case 1:
        memcpy(plec,men,9);
        break;
    case 2:
        memcpy(plec,kob,7);
        break;
    default:
        printf("Nie ma takiej opcji");
        return 1;
        break;
    }
    printf("Podaj wzrost: \n");
    scanf("%lf",&wzrost);
    for(i=0;i<11;i++)
    {
        printf("Podaj %d liczbe numeru pesel\n",i+1);
        scanf("%d",&pesel[i]);
        if(pesel[i]<0 || pesel[i]>9)
        {
            printf("Zly zakres pesel");
            return 1;
        }
    }





printf("Twoje imie i nazwisko to %s %s\nTwoja plec to %s\ntwoj wzrost to %g metra\ntwoj pesel to: ",imie,nazwisko,plec,wzrost);
int j;
for(j=0;j<11;j++)
{
    printf("%d",pesel[j]);
}
getch();
return 0;
}

