#include <stdio.h>
#include "../dao/dao.h"
#include "../io/leitor.h"
#include "../modelos/aluno.h"
#include "menus.h"

ItemDeMenu item_remover_aluno = {
    "Remover aluno",
    menu_remover_aluno
};

int menu_remover_aluno(void) {
    char matricula[MAX_MATRICULA];
    Aluno *aluno;

    ler_string("Matrícula: ", matricula, MAX_MATRICULA);

    aluno = pesquisar_aluno(matricula);

    if (aluno == NULL) {
        printf("Aluno não encontrado!\n");
    } else {
        remover_aluno(aluno);
    }

    return 0;
}
