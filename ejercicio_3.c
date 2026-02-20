#include <stdio.h>

void enteroABinario(int n, char *cadena) {
    for (int i = 31; i >= 0; i--) {
        *(cadena + (31 - i)) = (n >> i & 1) ? '1' : '0';
    }
    *(cadena + 32) = '\0';
}

int main() {
    int num, unos = 0;
    char bin[33], *p = bin;
    
    printf("Ingresa un entero positivo: ");
    scanf("%d", &num);
    enteroABinario(num, bin);
    printf("Binario: %s\n", bin);

    // --- TU CÓDIGO AQUÍ ---
    while (*p != '\0') {
        if (*p == '1') {
            unos++;
        }
        p++;   // avanzar el apuntador
    }

    printf("Total de bits '1': %d\n", unos);
    return 0;
}

// PREGUNTA: En la función enteroABinario, estamos pasando un int (4 bytes) y un apuntador char *. 
// Si un int ya vive en la memoria como una secuencia de bits, 
// ¿por qué es necesario 'convertirlo' a una cadena de caracteres para contarlos con el apuntador?
// RESPUESTA: Porque los bits del int no son caracteres; son valores binarios crudos.
// El char* solo puede recorrer y leer bytes como caracteres ('0' y '1'),
// así que debemos convertir los bits reales del entero a texto legible.
