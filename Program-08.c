#include <stdio.h>
#include <stdlib.h>
int main()
{
int t[6];
int i, maior, menor, soma;
float media;
printf("Gerando as 6 temperaturas para armazenar no vetor...\n");
srand(time(NULL));
soma = 0;
for (i=0; i < 6; i++)
{
t[i] = rand() % 50;
printf("Temperatura gerada = %d\n", t[i]);
soma = soma + t[i];
}
printf("A soma das temperaturas = %d\n\n", soma);
media = (float) soma / i;
printf("A media das temperaturas = %6.2f\n\n", media);
printf("Encontrando a menor e a maior temperatura\n");
menor = t[0];
maior = t[0];
for (i=1; i < 6; i++)
{
if (t[i] < menor)
{
menor = t[i];
}
if (t[i] > maior)
{
maior = t[i];
}
}
printf("A menor temperatura encontrada = %d\n\n", menor);
printf("A maior temperatura encontrada = %d\n\n", maior);
return 0;
}
