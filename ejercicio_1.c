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
// RESPUESTA: Aquí se comparan direcciones de la memoria; el ciclo continúa siempre y cuando el apuntador inicio esté antes 
// que fin en la memoria, y se detiene cuando se cruzan; viéndolo como un ejemplo práctico, es como si una persona alcanzara 
// a otra exactamente en el centro.
// Si se usa la otra condicion, se compararían los valores (letras), por lo que si las letras fueran las mismas en los extremos,
// dejaría nuestra cadena mal invertida. Por ejemplo, en "aroma", como empieza y termina con 'a', el ciclo se detendría 
// inmediatamente y la cadena no se invertiría correctamente.
