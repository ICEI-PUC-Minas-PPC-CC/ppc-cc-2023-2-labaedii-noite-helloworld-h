#include <stdio.h>
#include <stdlib.h>

void incluirCliente();


typedef struct{
    char nome;
    int cpf;
}Pessoa;

void incluirCliente(){
    Pessoa cliente;
    printf("\nDigite o nome do cliente:");
    scanf("%s",&cliente.nome);
    printf("\nDigite o CPF:");
    scanf("%d",&cliente.cpf);
}
