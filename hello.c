#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    char nome[100];
    int idade;

    scanf("%s", nome);
    scanf("%i", &idade);

    printf("tchau %s de anos %i\n", nome, idade);

    return 0;
}
