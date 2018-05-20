#include "aluno.h"

double calcular_media_aluno(const Aluno *aluno) {
    return (aluno->p1 + aluno->p2) / 2;
}

int aluno_passou(const Aluno *aluno) {
    return calcular_media_aluno(aluno) >= 7.0;
}
