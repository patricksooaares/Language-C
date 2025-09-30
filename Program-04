#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
int n1, n2, opcao;
do
{
printf("Advinhando um numero inteiro...\n");
printf("===============================\n\n");
srand(time(NULL));
Sleep(1000);
n1 = rand() % 10;
if (n1 % 2 == 0)
{
printf("Dica: o numero e par!\n");
}
else
{
printf("Dica: o numero e impar!\n");
}
printf("Digite o seu numero = ");
scanf("%d", &n2);
if (n1 == n2)
{
printf("Voce acertou, pois o numero sorteado foi = %d!!!\n\n", n1);
}
else
{
printf("Voce errou, pois o numero sorteado foi = %d!!!\n\n", n1);
}
printf("Digite [0] para sair ou [1] para tentar novamente = ");
scanf("%d", &opcao);
system("cls");
} while (opcao != 0);
printf("\nTerminando...\n\n");
return 0;
}
