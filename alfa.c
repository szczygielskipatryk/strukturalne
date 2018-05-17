#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char names[6] = { "JAPPRA" };
char temp[10];
int i = 0, j;
for(i; i < 6; i++) {
    for(j = 0; j <6; j++) {
        if(strcmp(names[j], names[j+1]) < 0) {
            strcpy(temp, names[j]);
            strcpy(names[j], names[j+1]);
            strcpy(names[j+1], temp);
        }
    }
}
for(i = 0; i < 6; i++) printf("%s\n", names[i]);
return 0;
}
