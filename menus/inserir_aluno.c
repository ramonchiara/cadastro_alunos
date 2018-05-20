#include <stdio.h>
#include "../dao/dao.h"
#include "../io/leitor.h"
#include "../modelos/aluno.h"
#include "menus.h"

ItemDeMenu item_inserir_aluno = {
    "Inserir aluno",
    menu_inserir_aluno
};

int menu_inserir_aluno(void) {
    Aluno aluno;

    ler_string("Matrícula: ", aluno.matricula, MAX_MATRICULA);
    ler_string("Nome: ", aluno.nome, MAX_NOME);
    ler_double("P1: ", &aluno.p1);
    ler_double("P2: ", &aluno.p2);

    inserir_aluno(&aluno);

    printf("Aluno cadastrado com sucesso!\n");

    return 0;
}
