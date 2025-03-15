#include <stdio.h>

// Foram criadas as funções abaixo para melhor organização do código.

int torre(int casas); // Funcao do movimento da torre
int rainha(int casas); // Funcao do movimento da rainha
int bispo(int diagn); // Funcao do movimento do bispo
int menu_cavalo1(int *direction); // Imprime o menu dinamico do movimento do cavalo.
int menu_cavalo2(int *direction); // Imprime o menu dinamico do movimento do cavalo.
int cavalo(void); // Funcao do movimento do cavalo
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
    case 2: // Case do movimento do bispo
    {
        int quant = 0;
        printf("Quantas casas? ");
        scanf("%i", &quant);

        bispo(quant);
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
    case 4: // Movimento do cavalo.
    {
        cavalo(); // direciona à função própria do movimento do cavalo.
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

int cavalo(void) // movimento do cavalo
{
    int direction[2];  // variaveis arrays e pointers para facilitar o fluxo.
    char *direction_move[2];

    printf("Digite a direção do movimento do cavalo:\n"); // menu interativo do movimento
    printf("1. Cima\n");
    printf("2. Baixo\n");
    printf("3. Esquerda\n");
    printf("4. Direita\n");
    scanf("%d", &direction[0]);

    if (direction[0] == 1)
    {
        direction_move[0] = "Cima";
        menu_cavalo1(direction);
    }
    if (direction[0] == 2)
    {
        direction_move[0] = "Baixo";
        menu_cavalo1(direction);
    }
    if (direction[0] == 3)
    {
        direction_move[0] = "Esquerda";
        menu_cavalo2(direction);
    }
    if (direction[0] == 4)
    {
        direction_move[0] = "Direita";
        menu_cavalo2(direction);
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

    int casas = 0; // Executa o movimento do cavalo após a escolha da direção pelo usuário.
    for (int i = 0; i <= 2 && casas < 2; i++, casas++)
    {
        printf("%s\n", direction_move[0]);
    }

    printf("%s\n", direction_move[1]);
}

int torre(int casas) // Funcao do movimento da torre
{
    if (casas > 8) // impede input do usuário maior que o tamanho do tabuleiro.
    {
        printf("O tabuleiro só tem 8 casas!\n"); 
    }
    if (casas > 0)
    {
        printf("Direita\n");
        torre(casas - 1);
    }
}

int rainha(int casas) // Funcao do movimento da rainha
{
    if (casas > 8) // impede input do usuário maior que o tamanho do tabuleiro.
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

int bispo(int diagn) // Funcao do movimento do bispo
{
    int casas = 0; // Estabelecendo a variavel que sofrerá acrescimo
    do
    {
        for (int i = 0; i < diagn; i++)
            ;
        {
            printf("Direita\n");
        }
        printf("Cima\n");
        casas++;
    } while (casas < diagn);
}

int menu_cavalo1(int *direction) // menu dinamico do cavalo
{
    printf("Digite a segunda direção do movimento do cavalo:\n");
    printf("3. Esquerda\n");
    printf("4. Direita\n");
    scanf("%d", &direction[1]);
}
int menu_cavalo2(int *direction)  // menu dinamico do cavalo
{
    printf("Digite a segunda direção do movimento do cavalo:\n");
    printf("1. Cima\n");
    printf("2. Baixo\n");
    scanf("%d", &direction[1]);
}