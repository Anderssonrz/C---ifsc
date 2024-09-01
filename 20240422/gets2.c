
#include <stdio.h>
#include <string.h>

int main() {
    char s1[50];
    char s2[50];
    int i;
    int size;

        printf("s1: ");

    gets(s1);
    fflush(stdin);

    printf("s2: ");
    gets(s2);
    fflush(stdin);
    size = strlen(s1);
    for (i = 0; i < size; i++)
            if (s1[i] != s2[i]) {
            printf("sao diferentes\n");
            return 0;
        }
            printf("sao iguais\n");

    }


