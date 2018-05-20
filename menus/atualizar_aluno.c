#include <stdio.h>
#include "../dao/dao.h"
#include "../io/leitor.h"
#include "../modelos/aluno.h"
#include "menus.h"

ItemDeMenu item_atualizar_aluno = {
    "Atualizar aluno",
    menu_atualizar_aluno
};

int menu_atualizar_aluno(void) {
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

        ler_string("Novo nome: ", aluno->nome, MAX_NOME);
        ler_double("Nova P1: ", &aluno->p1);
        ler_double("Nova P2: ", &aluno->p2);

        atualizar_aluno(aluno);
    }

    return 0;
}
