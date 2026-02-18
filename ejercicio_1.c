#include <stdio.h>

void invertirCadena(char *inicio) {
    char *fin = inicio;
    char aux;

    // 1. Mover 'fin' al último carácter antes del '\0'
    while (*fin != '\0') {
        fin++;
    }
    fin--; 

    // 2. Intercambio de valores
    while (inicio < fin) {
        // --- TU CÓDIGO AQUÍ ---
        // Implementa el intercambio usando la variable 'aux'
        // Desplaza los apuntadores adecuadamente
         aux = *inicio;
        *inicio = *fin;
        *fin = aux;


      inicio++;
      fin--;
    }
}

int main() {
    char palabra[] = "APUNTADORES";
    printf("Original: %s\n", palabra);
    invertirCadena(palabra);
    printf("Invertida: %s\n", palabra);
    return 0;
}

//Durante el ciclo de intercambio (swap), la condición de parada es while (inicio < fin). 
//Explica detalladamente qué es lo que se está comparando físicamente en esa instrucción (¿valores o direcciones?) 
// y qué sucedería si la condición fuera while (*inicio != *fin).
