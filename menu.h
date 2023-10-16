#include <stdio.h>

void exibirMenu();
void exibirSubMenu(int,int);
void opcaoSelecionadaSubMenu(int,int);
void incluirCliente();


void exibirMenu(){
    
    int opcao_menu=0,opcao_sub_menu=0;
    do
    {
        printf("1. Produto\n");
        printf("2. Pessoa\n");
        printf("3. Emprestimo\n");
        printf("0. Sair\n");
        printf("Selecione uma opcao:");
        scanf("%d", &opcao_menu);

        if (opcao_menu > 0 && opcao_menu < 4)
        {
            exibirSubMenu(opcao_menu,opcao_sub_menu);
        }

        if (opcao_menu > 3 || opcao_menu < 0)
        {
            printf("\nOpcao Invalida, tente novamente");
        }

        if (opcao_menu == 0)
        {
            break;
        }

    } while (opcao_menu > 4 || opcao_menu < 0);
}

void exibirSubMenu(int opcao_menu,int opcao_sub_menu){
    printf("\n\nOk! E dentro dessa opcao, voce deseja:\n");
    printf("1. Incluir\n");
    printf("2. Excluir\n");
    printf("3. Alterar\n");
    printf("4. Consultar (Em construcao)\n");
    printf("5. Sair\n");
    printf("Selecione uma opcao:");
    scanf("%d", &opcao_sub_menu);
    opcaoSelecionadaSubMenu(opcao_menu,opcao_sub_menu);
}

void opcaoSelecionadaSubMenu(int opcao_menu,int opcao_sub_menu){   

        switch(opcao_sub_menu){
        
        case 1:
        if (opcao_menu == 1){
        
        }
        else if (opcao_menu == 2){
        incluirCliente();
        }
        else if (opcao_menu == 3){
        
        }
        break;

    }

}



