#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "leitor.h"

#define MAX_VALOR 32

void ler_string(const char *rotulo, char *valor, int n) {
    int len;

    printf("%s", rotulo);
    fgets(valor, n, stdin);

    len = strlen(valor);
    if (valor[len - 1] == '\n') {
        valor[len - 1] = '\0';
    }
}

void ler_double(const char *rotulo, double *valor) {
    char texto[MAX_VALOR];
    ler_string(rotulo, texto, MAX_VALOR);
    *valor = atof(texto);
}

void ler_int(const char *rotulo, int *valor) {
    char texto[MAX_VALOR];
    ler_string(rotulo, texto, MAX_VALOR);
    *valor = atoi(texto);
}
