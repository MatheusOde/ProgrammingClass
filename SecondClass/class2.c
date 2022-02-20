// biblioteca para mostrar coisas na tela. Nessa biblioteca reside a função printf() por exemplo
#include <stdio.h>
// biblioteca para usar ponteiros
#include <stdlib.h>

// This is a function that returns a float
float precoProduto(int id)
{
    // a traducao disso eh: se o id eh igual a 4473289 entao
    if (id == 4473289)
    {
        return 20.00;
    }

    // else if is the same as "senao", ou seja, se a primeira condicao nao foi entao se for 1
    else if (id == 1)
    {
        return 1.99;
    }

    // else significa senao so que sem condicao, ou seja, se nao for os outros vai esse
    else
    {
        return 0;
    }
}

char *nomeProduto(int id)
{
    if (id == 4473289)
    {
        return "a headphone";
    }

    else if (id == 1)
    {
        return "a chocolate bar";
    }

    else
    {
        return "an exception";
    }
}

// função principal
int main()
{
    int id, quantidade;
    float preco;
    char *nome;

    // ignore essa linha por enquanto
    nome = (char *)malloc(100);

    printf("What's the product?\n");

    //%d eh especifico para int, eh como se armazena int
    // o & sinaliza que eh para armazenar no endereço de id
    scanf("%d", &id);

    // aqui fazemos a chamada da função que criamos
    preco = precoProduto(id);
    nome = nomeProduto(id);

    // aqui o 0.2f serve para o computador imprimir na tela somente duas casas decimais
    printf("The product costs %0.2f $ and is %s\n", preco, nome);

    printf("How much do you intend to buy?\n");

    scanf("%d", &quantidade);

    printf("Okay, the cost is %0.2f dollars", quantidade * preco);
}
