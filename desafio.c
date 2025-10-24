// Desafio Aventurteiro
#include <stdio.h>
#include <string.h>

#define MAX_TERRITORIOS 5
#define TAM_NOME 30
#define TAM_COR  10

/* Estrutura de dados composta que representa um território.
 * nome: até 29 caracteres + '\0' (sem espaços neste exemplo)
 * cor:  até 9 caracteres + '\0' (sem espaços neste exemplo)
 * tropas: quantidade de tropas (inteiro >= 0)
 */
typedef struct {
    char nome[TAM_NOME];
    char cor[TAM_COR];
    int  tropas;
} Territorio;

/* Consome caracteres remanescentes até o fim da linha.
 * Útil quando o usuário digita algo inválido para 'tropas'. */
static void limpar_entrada(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { /* descarta */ }
}

int main(void) {
    Territorio territorios[MAX_TERRITORIOS];

    printf("=== Cadastro de Territórios ===\n");
    printf("Você irá cadastrar %d territórios.\n", MAX_TERRITORIOS);
    printf("Observação: para este exemplo, digite NOME e COR sem espaços.\n");
    printf("Ex.: Nome: Reino_Azul | Cor: Azul | Tropas: 120\n\n");

    /* Entrada dos dados com laço for */
    for (int i = 0; i < MAX_TERRITORIOS; i++) {
        printf("Território %d/%d\n", i + 1, MAX_TERRITORIOS);

        /* Leitura do nome (sem espaços) com scanf
         * %29s limita a leitura a 29 caracteres e evita overflow. */
        printf("  Nome do território (sem espaços): ");
        if (scanf("%29s", territorios[i].nome) != 1) {
            printf("  Erro ao ler o nome.\n");
            return 1;
        }

        /* Leitura da cor (sem espaços) com scanf */
        printf("  Cor do exército (sem espaços): ");
        if (scanf("%9s", territorios[i].cor) != 1) {
            printf("  Erro ao ler a cor.\n");
            return 1;
        }

        /* Leitura de tropas com validação simples (inteiro >= 0) */
        printf("  Número de tropas (inteiro >= 0): ");
        while (1) {
            if (scanf("%d", &territorios[i].tropas) == 1 && territorios[i].tropas >= 0) {
                break; /* entrada válida */
            }
            printf("  Entrada inválida. Digite um inteiro >= 0: ");
            limpar_entrada(); /* limpa caracteres inválidos da linha */
        }

        limpar_entrada(); /* limpa fim de linha para a próxima iteração (boa prática) */
        printf("\n");
    }

    /* Exibição dos dados após o cadastro */
    printf("\n=== Territórios cadastrados ===\n");

    /* Cabeçalho formatado (tamanhos coerentes com os limites da struct) */
    printf("%-3s | %-29s | %-9s | %-6s\n", "#", "Nome", "Cor", "Tropas");
    printf("----+-------------------------------+-----------+--------\n");

    for (int i = 0; i < MAX_TERRITORIOS; i++) {
        printf("%-3d | %-29s | %-9s | %6d\n",
               i + 1,
               territorios[i].nome,
               territorios[i].cor,
               territorios[i].tropas);
    }

    printf("\nCadastro concluído com sucesso.\n");
    return 0;
}
