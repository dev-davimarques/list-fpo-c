#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define uma variável constante, com o número máximo de clientes que podem ser armazenado no array
#define MAX_CLIENTES 50

// Estrutura para armazenar os dados do cliente
typedef struct
{
    int codigo;
    char nome[100];
    char email[100];
    char endereco[100];
    int idade;
} Cliente;

// Array global para armazenar os clientes e contador
Cliente clientes[MAX_CLIENTES];
int totalClientes = 0;

// Protótipos das funções
void exibirMenu();
void adicionarCliente();
void listarClientes();
void buscarCliente();

int main(){
    int opcao;

    do
    {
        exibirMenu();
        scanf("%d", &opcao);
        while (getchar() != '\n'); // Limpa todo o buffer do teclado

        switch (opcao)
        {
        case 1:
            adicionarCliente();
            break;
        case 2:
            listarClientes();
            break;
        case 0:
            printf("Saindo do sistema...\n");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
        }

        if (opcao != 0) // Só pede "Pressione Enter" se não for sair
        {
            printf("\nPressione Enter para continuar...");
            while (getchar() != '\n'); // Limpa o buffer e espera Enter
        }

    } while (opcao != 0); // Corrigido: agora sai quando opcao == 0

    return 0;
}

void exibirMenu()
{
    system("clear || cls"); // Limpa a tela no Linux/Mac (clear) ou Windows (cls)
    printf("==================================\n");
    printf("      SISTEMA DE CADASTRO\n");
    printf("==================================\n");
    printf("1 - Adicionar Cliente\n");
    printf("2 - Listar Clientes\n");
    printf("0 - Sair\n");
    printf("==================================\n");
    printf("Escolha uma opcao: ");
}

void adicionarCliente()
{
    Cliente cliente;
    char buffer[100]; // Buffer temporário para leitura
    
    printf("Código: ");
    fgets(buffer, sizeof(buffer), stdin);
    cliente.codigo = atoi(buffer);
    
    printf("Nome: ");
    fgets(cliente.nome, sizeof(cliente.nome), stdin);
    
    printf("Email: ");
    fgets(cliente.email, sizeof(cliente.email), stdin);
    
    printf("Endereco: ");
    fgets(cliente.endereco, sizeof(cliente.endereco), stdin);
    
    printf("Idade: ");
    fgets(buffer, sizeof(buffer), stdin);
    cliente.idade = atoi(buffer);
}

void listarClientes()
{
    // Implementar a lógica de listagem aqui...
    printf("Função 'listarClientes' a ser implementada.\n");
}

void buscarCliente()
{
    // Implementar a lógica de busca aqui...
    printf("Função 'buscarCliente' a ser implementada.\n");
}