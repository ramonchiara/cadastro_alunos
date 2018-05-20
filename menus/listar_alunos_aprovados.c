#include <stdio.h>
#include <stdlib.h>
#include "../dao/dao.h"
#include "../modelos/aluno.h"
#include "menus.h"
#include "ordens.h"

ItemDeMenu item_listar_alunos_aprovados = {
    "Listar alunos aprovados",
    menu_listar_alunos_aprovados
};

int menu_listar_alunos_aprovados(void) {
    int i, n;
    Aluno *alunos, atual;

    n = listar_alunos_size();
    alunos = listar_alunos();

    qsort(alunos, n, sizeof (Aluno), (int (*)(const void *, const void *)) alfabetica);

    for (i = 0; i < n; i++) {
        atual = alunos[i];
        
        if (aluno_passou(&atual)) {
            printf("%s - %s - %.1f\n", atual.matricula, atual.nome, calcular_media_aluno(&atual));
        }
    }

    return 0;
}
