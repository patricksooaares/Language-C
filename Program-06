#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
char captcha[6] = "XYAB0";
char caractere;
int i, n, alterna = 0;
printf("Apresentando o valor inicial\n");
printf("%s\n", captcha);
printf("Tamanho da string = %d\n", strlen(captcha));
printf("Gerando uma CaptCha\n");
srand(time(NULL));
for (i=0; i < 5; i++)
{
//Sleep(1000);
if (alterna == 0)
{
n = (rand() % 26) + 65;
alterna == 1;
}
else
{
//n = (rand() % 26) + 97;
n = (rand() % 10) + 48;
alterna = 0;
}
caractere = (char) n;
captcha[i] = caractere;
printf("Numero gerado = %d\n", n);
printf("Caractere gerado = %c\n\n", caractere);
}
captcha[i] = '\0';
printf("Captcha gerada = %s\n\n", captcha);
}
