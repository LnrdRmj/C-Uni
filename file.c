#include <stdio.h>

int main() {

    FILE *file = fopen("test.txt", "r+");
    char dascrivere[] = "E basta con sto ciao aooooooh";
    
    int i = fwrite(dascrivere, 1, 100, file);
    printf("%i", i);

    fclose(file);

    return 0;

}