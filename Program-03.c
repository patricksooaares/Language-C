#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
int n1, n2;
printf("Advinhando um numero inteiro...\n");
printf("===============================\n\n");
srand(time(NULL));
//srand(clock());
Sleep(1000);
n1 = rand() % 10;
//printf("Numero sorteado = %d\n\n", n1);
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
return 0;
}
