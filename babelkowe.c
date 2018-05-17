#include <stdio.h>
void bobelkowe(int tab[],int n);
int main()
{
    int n,i,tab[100];
    printf("ile liczb:\n");
    scanf("%d",&n);
    printf("Podaj liczby\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&tab[i]);
    }
    bobelkowe(tab,n);
    printf("Po sortowaniu:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",tab[i]);
    }
    return 0;
}
void bobelkowe(int tab[],int n)
{
    int i,j,tmp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(tab[j]>tab[j+1])
            {
                tmp=tab[j];
                tab[j]=tab[j+1];
                tab[j+1]=tmp;
            }
        }
    }
}
