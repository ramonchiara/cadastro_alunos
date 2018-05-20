#ifndef MENUS_H
#define MENUS_H

typedef struct {
    char *descricao;
    int (*executar)(void);
} ItemDeMenu;

#define declare_item(item) extern ItemDeMenu item_##item; int menu_##item(void);

declare_item(inserir_aluno)
declare_item(listar_alunos)
declare_item(consultar_aluno)
declare_item(atualizar_aluno)
declare_item(remover_aluno)
declare_item(listar_alunos_aprovados)
declare_item(listar_alunos_reprovados)
declare_item(listar_alunos_por_media)
declare_item(sair)
        
#endif /* MENUS_H */
