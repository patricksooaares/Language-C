#include <stdio.h>
int main()
{
int opcao;
do
{
system("cls");
printf("Capitais dos Estados\n");
printf("====================\n\n");
printf("[1] Capital do Goias\n");
printf("[2] Capital de Pernambuco\n");
printf("[3] Capital do Rio Grande do Sul\n");
printf("[4] Sair\n\n");
printf("Escolha a sua opcao = ");
scanf("%d", &opcao);
switch(opcao)
{
case 1: printf("Goiania\n\n");
system("pause");
break;
case 2: printf("Recife\n\n");
system("pause");
break;
case 3: printf("Porto Alegre\n\n");
system("pause");
break;
case 4: printf("Saindo...\n\n");
system("pause");
break;
default: printf("Opcao invalida...\n\n");
system("pause");
}
} while (opcao != 4);
return 0;
}
