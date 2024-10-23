#include <stdio.h> // Biblioteca de comunica��o com o usu�rio
#include <stdlib.h> // Binlioteca de aloca��o de esapa�o em mem�ria
#include <locale.h> // Biblioteca de aloca��o de texto por regi�o
#include <string.h> // Biblioteca respons�vel por cuidar das strings
#include <windows.h> // Bibilioteca para acentuar 

// A fun��o desse c�digo vai ser criar, consultar e deletar grupos de trabalhos de escola; com nomes de alunos, e fun��o (atividade) do grupo. 

int adicionar()//----------------------------------------------------------------| Adicionar |-------------------------------------------------------------------------------------------
{
	setlocale(LC_ALL, "");
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	
	
	char banco[50];
	char grupo[50];
	char nome_1[50];
	char chamada_1[50];
	char nome_2[50];
	char chamada_2[50];
	char nome_3[50];
	char chamada_3[50];
	char tema[50];
	
	system("cls");
	
	printf("Digite o nome do grupo: ");//-----------Nome do Grupo
	scanf("%s", grupo);
	
	
	strcpy(banco, grupo);
	
	FILE *file;
	file = fopen(banco, "w");
	fprintf(file, "Grupo: ");
	fclose(file);
	
	file = fopen(banco, "a");
	fprintf(file, grupo);
	fclose(file);
	
	file = fopen(banco, "a");//-------------Par�nteses
	fprintf(file, " (");
	fclose(file);
	
	printf("Nome do(a) primeiro(a) aluno(a): ");//-----------Nome do primeiro aluno
	scanf("%s", nome_1);
	
	file = fopen(banco, "a");
	fprintf(file, nome_1);
	fclose(file);
	
	file = fopen(banco, "a");//---------------Tra�o
	fprintf(file, " - ");
	fclose(file);
	
	printf("N�mero do(a) primeiro(a) aluno(a): ");//-------------N�mero do primeiro aluno
	scanf("%s", chamada_1);
	
	file = fopen(banco, "a");
	fprintf(file, chamada_1);
	fclose(file);
	
	file = fopen(banco, "a");//---------------V�rgula
	fprintf(file, ", ");
	fclose(file);
	
	printf("Nome do(a) segundo(a) aluno(a): ");//--------------Nome do segundo alundo
	scanf("%s", nome_2);
	
	file = fopen(banco, "a");
	fprintf(file, nome_2);
	fclose(file);
	
	file = fopen(banco, "a");//--------------Tra�o
	fprintf(file, " - ");
	fclose(file);
	
	printf("N�mero do(a) segundo(a) aluno(a): ");//--------------N�mero do segundo aluno
	scanf("%s", chamada_2);
	
	file = fopen(banco, "a");
	fprintf(file, chamada_2);
	fclose(file);
	
	file = fopen(banco, "a");//---------------V�rgula
	fprintf(file, ", ");
	fclose(file);
	
	printf("Nome do(a) terceiro(a) aluno(a): ");//--------------Nome do terceiro alundo
	scanf("%s", nome_3);
	
	file = fopen(banco, "a");
	fprintf(file, nome_3);
	fclose(file);
	
	file = fopen(banco, "a");//--------------Tra�o
	fprintf(file, " - ");
	fclose(file);
	
	printf("N�mero do(a) terceiro(a) aluno(a): ");//--------------N�mero do terceiro aluno
	scanf("%s", chamada_3);
	
	file = fopen(banco, "a");
	fprintf(file, chamada_3);
	fclose(file);
			
	file = fopen(banco, "a");//---------------Par�nteses
	fprintf(file, ") ");
	fclose(file);

	printf("Tema da atividade do grupo: ");//----------------Tema do grupo
	scanf("%s", tema);
	
	file = fopen(banco, "a");
	fprintf(file, "Fun��o: ");
	fclose(file);
	
	file = fopen(banco,"a");
	fprintf(file, tema);
	fclose(file);
	
	system("pause");
	system("cls");
	
}
int ver()//-------------------------------------------------------------------------| Ver |----------------------------------------------------------------------------------------------
{
	
	setlocale(LC_ALL, "");
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	
	char grupo[50];
	char dados[200];
	
	printf("Qual grupo deseja ver? ");
	scanf("%s", grupo);
	
	FILE *file;
	file = fopen(grupo,"r");
	
	if(file == NULL)
	{
		printf("O grupo digitado n�o foi encontrado.");
	}
	
	while(fgets(dados, 200, file) != NULL)
	{
		printf("Informa��es do grupo selecionado: \n");
		printf("%s", dados);
		printf("\n\n");
		
		system("pause");
		system("cls");
		
	}
}
int excluir()//-------------------------------------------------------------------| Excluir |--------------------------------------------------------------------------------------------
{
	system("cls");
	
	char grupo[50];
	
	printf("Digite o nome do grupo que deseja excluir: \n");
	scanf("%s", grupo);
	
	remove(grupo);
	
	FILE *file;
	file = fopen(grupo, "r");
	
	if(file == NULL)
	{
		system("cls");
		printf("Se o grupo existia, n�o existe mais. rsrs\n\n");
		system("pause");
		system("cls");
	}
}
int main() //-----------------------------------------------------------------| menu do usu�rio |----------------------------------------------------------------------------------------
{
	int opcao=0;
	int laco=1;
	
	for(laco=1; laco=1;) // tela inicial
	{
		setlocale(LC_ALL, "");
		SetConsoleCP(1252);
		SetConsoleOutputCP(1252);
	
		printf("\n^^^^^ Grupos da Gincana ^^^^^\n\n");
	
		printf("O que deseja fazer? \n\n");
	
		printf("\t(1) - Adicionar grupo: \n");
		printf("\t(2) - Ver grupo: \n");
		printf("\t(3) - Excluir grupo: \n");
	
		printf("Op��es: "); // op��es
	
		scanf("%d", &opcao);
	
		switch(opcao) 
		{
			case 1:
			adicionar();
			break;
				
			case 2:
			ver();
			break;
				
			case 3:
			excluir();
			break;
			
			default:
			system("cls");
			printf("Escolha uma op��o v�lida...");
			system("pause");
		}
	}
}
