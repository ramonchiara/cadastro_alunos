#include <stdio.h>
#include "../dao/dao.h"
#include "../io/leitor.h"
#include "../modelos/aluno.h"
#include "menus.h"

ItemDeMenu item_consultar_aluno = {
    "Consultar aluno",
    menu_consultar_aluno
};

int menu_consultar_aluno(void) {
    char matricula[MAX_MATRICULA];
    Aluno *aluno;

    ler_string("Matrícula: ", matricula, MAX_MATRICULA);

    aluno = pesquisar_aluno(matricula);

    if (aluno == NULL) {
        printf("Aluno não encontrado!\n");
    } else {
        printf("Nome: %s\n", aluno->nome);
        printf("P1..: %.1f\n", aluno->p1);
        printf("P2..: %.1f\n", aluno->p2);
    }

    return 0;
}
