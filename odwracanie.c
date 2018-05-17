#include <stdio.h>
#include <stdlib.h>
void zamien(int *tab, int dl)
{
    int down = dl - 1;    // "spadzik" (spada w dol)
    int buff = 0;       // bufor do przechowania jednej z komorek
    int *tPtr = tab;
    for (int i=0; i< down; i++)
    {
        buff = *tPtr;
        *tPtr = tab[down];   // krok 2: kopiuj komorke "b" do komorki "a"
        tab[down] = buff;   // krok 3: kopiuj bufor do komorki b
        tPtr++;              // inkrementuj wskaznik
        down--;             // dekrementuj spadzik
    }
}

int main()
{int i=0;
    int tab[]={5,6,7,8};
    zamien(tab,4);
    for(i;i<4;i++)
    {
    printf("%d, ",tab[i]);
    }
    return 0;
}
