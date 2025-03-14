#include <stdio.h>

/* Criado no vscode do pc local e copiado para o codespace.
Nesse desafio procurei utilizar os 3 tipos de loop para a execução das tarefas */
int torre(casas);
int rainha(casas);
int cavalo(void);
int main(void)
{
    // Declaracao de variaves para uso nos loops
    int casas;
    int peca;

    // Print menu interativo para o usuario escolher a peça a ser movimentada
    printf("Selecione a peça para fazero movimento:\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    scanf("%d", &peca);

    switch (peca)
    {
    case 1: // Caso que movimenta a torre.
    {
        int quant = 0;
        printf("Quantas casas? ");
        scanf("%i", &quant);

        torre(quant);
        break;
    }
    case 2: // Case do movimento do bispo               // FAZENDO O BISPO ---------------------------------------------
    { 
        casas = 0; // Estabelecendo a variavel que sofrerá acrescimo
        do
        {
            printf("Direita, Cima\n");
            casas++;
        } while (casas < 5);                      
        break;
    }
    case 3: // Case do movimento da rainha
    {
        int quant = 0;
        printf("Quantas casas? ");
        scanf("%i", &quant);

        rainha(quant);
        break;
    }
    case 4:
    {
        cavalo();
        break;
    }
    default: // Default impede entrada de input invalido.
    {
        printf("Selecione uma opção válida!");
        break;
    }
        return 0;
    }
}

int cavalo(void)
{
    int direction[2];
    char *direction_move[2];

    printf("Digite a direção do movimento do cavalo:\n");
    printf("1. Cima\n");
    printf("2. Baixo\n");
    printf("3. Esquerda\n");
    printf("4. Direita\n");
    scanf("%d", &direction[0]);

    if (direction[0] == 1)
    {
        direction_move[0] = "Cima";
        printf("Digite a segunda direção do movimento do cavalo:\n");
        printf("3. Esquerda\n");
        printf("4. Direita\n");
        scanf("%d", &direction[1]);
    }
    if (direction[0] == 2)
    {
        direction_move[0] = "Baixo";
        printf("Digite a segunda direção do movimento do cavalo:\n");
        printf("3. Esquerda\n");
        printf("4. Direita\n");
        scanf("%d", &direction[1]);
    }
    if (direction[0] == 3)
    {
        direction_move[0] = "Esquerda";
        printf("Digite a segunda direção do movimento do cavalo:\n");
        printf("1. Cima\n");
        printf("2. Baixo\n");
        scanf("%d", &direction[1]);
    }
    if (direction[0] == 4)
    {
        direction_move[0] = "Direita";
        printf("Digite a segunda direção do movimento do cavalo:\n");
        printf("1. Cima\n");
        printf("2. Baixo\n");
        scanf("%d", &direction[1]);
    }

    if (direction[1] == 1)
    {
        direction_move[1] = "Cima";
    }
    if (direction[1] == 2)
    {
        direction_move[1] = "Baixo";
    }
    if (direction[1] == 3)
    {
        direction_move[1] = "Esquerda";
    }
    if (direction[1] == 4)
    {
        direction_move[1] = "Direita";
    }
    printf("\n");

    int casas = 0;
    do
    {
        for (int i = 0; i < 2; i++)
        {
            printf("%s\n", direction_move[0]);
            casas++;
        }
    } while (casas == 1);

    printf("%s\n", direction_move[1]);
}

int torre(casas)
{
    if (casas > 8)
    {
        printf("O tabuleiro só tem 8 casas!\n");
        return 0;
    }
    if (casas > 0)
    {
        printf("Direita\n");
        torre(casas - 1);
    }
}

int rainha(casas)
{
    if (casas > 8)
    {
        printf("O tabuleiro só tem 8 casas!\n");
        return 0;
    }

    if (casas > 0)
    {
        printf("Esquerda\n");
        rainha(casas - 1);
    }
}