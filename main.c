#include <stdio.h>
#include <stdlib.h>
#include "io/leitor.h"
#include "menus/menus.h"

#define PRINCIPAL_LENGTH 9

int main(int argc, char *argv[]) {
    ItemDeMenu principal[PRINCIPAL_LENGTH];
    int sair = 0, i, opcao;

    principal[0] = item_inserir_aluno;
    principal[1] = item_listar_alunos;
    principal[2] = item_consultar_aluno;
    principal[3] = item_atualizar_aluno;
    principal[4] = item_remover_aluno;
    principal[5] = item_listar_alunos_aprovados;
    principal[6] = item_listar_alunos_reprovados;
    principal[7] = item_listar_alunos_por_media;
    principal[8] = item_sair;

    do {
        for (i = 0; i < PRINCIPAL_LENGTH; i++) {
            printf("%d - %s\n", i, principal[i].descricao);
        }
        ler_int("Qual a opção desejada: ", &opcao);

        sair = principal[opcao].executar();
    } while (!sair);

    return (EXIT_SUCCESS);
}
