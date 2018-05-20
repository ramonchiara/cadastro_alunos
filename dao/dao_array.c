#include <stdio.h>
#include <string.h>
#include "dao.h"

#define MAX_ALUNOS 10

static Aluno bd[MAX_ALUNOS];
static int n = 0;

void inserir_aluno(const Aluno *aluno) {
    if (n < MAX_ALUNOS) {
        bd[n++] = *aluno;
    }
}

int listar_alunos_size(void) {
    return n;
}

Aluno *listar_alunos(void) {
    return bd;
}

Aluno *pesquisar_aluno(const char *matricula) {
    Aluno *encontrado = NULL;
    int i;

    for (i = 0; i < n; i++) {
        if (!strcmp(bd[i].matricula, matricula)) {
            encontrado = &bd[i];
            break;
        }
    }

    return encontrado;
}

void atualizar_aluno(const Aluno *aluno) {
    Aluno *encontrado = pesquisar_aluno(aluno->matricula);

    if (encontrado != NULL) {
        *encontrado = *aluno;
    }
}

void remover_aluno(const Aluno *aluno) {
    int i, j;

    for (i = 0; i < n; i++) {
        if (!strcmp(bd[i].matricula, aluno->matricula)) {
            n--;
            for (j = i; j < n; j++) {
                bd[j] = bd[j + 1];
            }
            break;
        }
    }
}
