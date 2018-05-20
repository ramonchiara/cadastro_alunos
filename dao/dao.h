#ifndef DAO_H
#define DAO_H

#include "../modelos/aluno.h"

void inserir_aluno(const Aluno *aluno);
int listar_alunos_size(void);
Aluno *listar_alunos(void);
Aluno *pesquisar_aluno(const char *matricula);
void atualizar_aluno(const Aluno *aluno);
void remover_aluno(const Aluno *aluno);

#endif /* DAO_H */
