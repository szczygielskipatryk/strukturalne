#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int dodawanie(int a, int b)
{
    int wynik=a+b;
   return wynik;
}
int odejmowanie(int a, int b)
{
    int wynik=a-b;
   return wynik;
}
int mnozenie(int a, int b)
{
    int wynik=a*b;
   return wynik;
}
float dzielenie(int a, int b)
{
    float wynik=(float)a/(float)b;
   return wynik;
}
unsigned long long potega(int a,int b)
{
unsigned long long wynik=1;

    wynik=pow(a,b);

return wynik;
}
int silnia(int n)
{
    if(n<0)
    {
        return 0;
    }
else if (n <=1)
{
    return 1;
}
else
{
    return n*silnia(n-1);
}

}

int main()
{
int opcja;
int a,b;
printf("::::::::::::::::::::::::::::::>Menu<::::::::::::::::::::::::::::::\n 1-dodawanie\n 2 -odejmowanie\n 3 -mnozenie\n 4 -dzielenie\n 5 -potega\n 6 -silnia\n 0 - wyjscie\n\n\n");


    while(1)
{
    printf("\nPodaj opcje: ");
scanf("%d",&opcja);

switch (opcja){

case 0:
exit(0);
break;

 case 1:
    printf("Podaj 2 liczby\n");
    scanf("%d %d",&a,&b);
    printf("%d",dodawanie(a,b));
    break;

case 2:

 printf("Podaj 2 liczby\n");
    scanf("%d %d",&a,&b);
     printf("%d",odejmowanie(a,b));
    break;

case 3:
 printf("Podaj 2 liczby\n");
    scanf("%d %d",&a,&b);
    printf("%d",mnozenie(a,b));
break;
case 4:
 printf("Podaj 2 liczby\n");
    scanf("%d %d",&a,&b);
     printf("%f",dzielenie(a,b));
break;
case 5:
 printf("Podaj 2 liczby\n");
    scanf("%d %d",&a,&b);
    printf("%d",potega(a,b));
break;
case 6:
 printf("Podaj liczbe\n");
    scanf("%d",&a);
    silnia(a);
    if(silnia(a)==0)
    {
        printf("Nie mozna liczyc silni z liczb niedodatnich");
    }

    printf("%d",silnia(a));
break;
default:
    printf("zly znak\n");
    break;
    }

}
return 0;
}
