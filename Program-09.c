#include <stdio.h>
#include <stdlib.h>
int main()
{
int t[5][3], i, j, maior, menor, diaMenor, diaMaior;
printf("Gerando 15 temperaturas para a matriz...\n");
srand(time(NULL));
for (i=0; i < 5; i++)
{
for (j=0; j < 3; j++)
{
t[i][j] = rand() % 50;
printf("%6d", t[i][j]);
}
printf("\n");
}
printf("Encontrando a menor e a maior temperatura...\n");
menor = t[0][0];
maior = t[0][0];
diaMenor = 0;
diaMaior = 0;
for (i=0; i < 5; i++)
{
for (j=0; j < 3; j++)
{
if (t[i][j] < menor)
{
menor = t[i][j];
diaMenor = i;
}
if (t[i][j] > maior)
{
maior = t[i][j];
diaMaior = i;
}
}
}
printf("A menor temperatura = %d\n", menor);
printf("A maior temperatura = %d\n", maior);
switch(diaMenor)
{
case 0: printf("\nMenor temperatura %d encontrada na segunda-feira\n",
menor);
break;
case 1: printf("\nMenor temperatura %d encontrada na terca-feira\n",
menor);
break;
case 2: printf("\nMenor temperatura %d encontrada na quarta-feira\n",
menor);
break;
case 3: printf("\nMenor temperatura %d encontrada na quinta-feira\n",
menor);
break;
case 4: printf("\nMenor temperatura %d encontrada na sexta-feira\n",
menor);
break;
}
return 0;
}
