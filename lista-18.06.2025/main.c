#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Define uma variável constante, com o número máximo de clientes que podem ser armazenado no array
#define MAX_CLIENTES 50

// Estrutura para armazenar os dados do cliente
typedef struct
{
    int cod;
    char name[100];
    char email[100];
    char address[100];
    int age;
} Client;

// Array global para armazenar os clientes e contador
Client clientes[MAX_CLIENTES];
int allClients = 0;

// Protótipos das funções
void exibirMenu();
void adicionarCliente();
void listarClientes();
void buscarCliente();

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int option;

    do
    {
        exibirMenu();
        scanf("%d", &option);
        getchar(); // Limpa o buffer do teclado

        switch (option)
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
        printf("\nPressione Enter para continuar...");
        getchar();

    } while (option != 0);

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
    printf("Escolha uma opção: ");
}

void adicionarCliente()
{
    if (allClients >= MAX_CLIENTES){
        printf("Total de cadastros atingidos! \n");
        return;
    }

    // instancia minha estrutura
    Client newClient;

    printf("Código: ");
    scanf("%d", &newClient.cod);
    getchar();

    printf("Nome: ");
    fgets(newClient.name, sizeof(newClient.name), stdin);
    newClient.name[strcspn(newClient.name, "\n")] = 0;

    printf("Email: ");
    fgets(newClient.email, sizeof(newClient.email), stdin);
    newClient.email[strcspn(newClient.email, "\n")] = 0;

    printf("Endereço: ");
    fgets(newClient.address, sizeof(newClient.address), stdin);
    newClient.address[strcspn(newClient.address, "\n")] = 0;

    printf("Idade: ");
    scanf("%d", &newClient.age);
    getchar();

    clientes[allClients++] = newClient;

}

void listarClientes()
{
    if(allClients == 0){
        printf("Nenhum cliente encontrado! \n");
    } else {
        printf("======== Lista de Clientes ========\n");
        for(int i = 0; i < allClients; i++){
            printf("---------------------------------------\n");
            printf("Código: %d\n",clientes[i].cod);
            printf("Nome: %s\n",clientes[i].name);
            printf("Email: %s\n",clientes[i].email);
            printf("Endereço: %s\n",clientes[i].address);
            printf("Idade: %d\n",clientes[i].age);
        }
    }
}

// void buscarCliente()
// {
//     // Implementar a lógica de busca aqui...
//     printf("Função 'buscarCliente' a ser implementada.\n");
// }