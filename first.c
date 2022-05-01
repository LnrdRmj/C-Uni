#include <stdio.h>

void ciao();

struct PC
{
    
    char gpu[100];
    char cpu[100];

};

typedef struct PC PC;

int main() {

    system("cls");

    int num = 1;
    int *puntatore = &num;

    printf("%i", num);
    printf("Il puntatore del'integer e': %p", puntatore);
    printf("Il valore del puntatore del'integer e': %i\n", *puntatore);

    int arr[5];

    for (int i = 0; i < 5; i++){

        arr[i] = i;
        printf("%d\n", arr[i]);

    }

    int *arrpointer = arr;
    
    int anotherarr[] = {3, 2, 1};
    int *anotherPointer = anotherarr;

    for (int i = 0; i < 3; i++)
    {
        printf("%i\n", *(anotherPointer + i));
    }

    printf("Accesso tramite puntatore %d\n", *(arrpointer + 144));

    ciao();

    struct PC mypc = {"rtx3090", "i9"};
    struct PC *samePC = &mypc;

    printf("%s\n", mypc.cpu);

    printf("Stesso PC: %s", samePC->gpu);

    PC anotherPC = {"rtx3090", "i9"};

    return 1;

}

void ciao(){

    printf("ciao\n");

}