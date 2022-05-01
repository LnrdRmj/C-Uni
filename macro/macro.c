#include <stdio.h>

#define CIAO "MAMMA MIA"

int main() {

    #ifdef CIAO
        println("La macro c'è");
    #else
        println("La macro non c'è");    
    #endif

    #undef CIAO

    #ifdef CIAO
        println("La macro c'è");
    #else
        println("La macro non c'è");    
    #endif

    println("Queste sono delle macro predefinite");

    println(__FILE__);
    printf("%d\n", __LINE__);
    println(__DATE__);
    println(__TIME__);
    printf("%d\n", __STDC__);

}

void println(char message[]){

    printf("%s\n", message);

}