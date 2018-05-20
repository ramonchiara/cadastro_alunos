#include <string.h>
#include "ordens.h"

int alfabetica(const Aluno *a1, const Aluno *a2) {
    return strcmp(a1->nome, a2->nome);
}

int media(const Aluno *a1, const Aluno *a2) {
    double m1, m2;

    m1 = calcular_media_aluno(a1);
    m2 = calcular_media_aluno(a2);

    return (int) (m1 - m2);
}
