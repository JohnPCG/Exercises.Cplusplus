#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, soma;
    //Mostra a mensagem antes da leitura dos quatro n�meros
    // \n - colocar o cursos na linha de baixo
    printf("\nDigite quatro n�meros\n");
    //Recebe os quatro n�meros
    scanf("%d%*c",&n1);
    scanf("%d%*c",&n2);
    scanf("%d%*c",&n3);
    scanf("%d%*c",&n4);
    //Soma os n�meros digitados
    soma = n1 + n2 + n3 + n4;
    //Mostra mensagem e o resultado da soma
    printf("\nResultado da soma = %d\n", soma);
    //Para o programa a espera de um ENTER
    getchar();
    return 0;
}
