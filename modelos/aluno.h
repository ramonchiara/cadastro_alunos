#ifndef ALUNO_H
#define ALUNO_H

#define MAX_MATRICULA 20
#define MAX_NOME 100

typedef struct Aluno {
    char matricula[MAX_MATRICULA];
    char nome[MAX_NOME];
    double p1, p2;
} Aluno;

double calcular_media_aluno(const Aluno *aluno);
int aluno_passou(const Aluno *aluno);

#endif /* ALUNO_H */
