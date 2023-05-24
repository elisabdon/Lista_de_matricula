#include <stdio.h>
#include <string.h>

struct Aluno {
char nome[50];
char matricula[20];
};

	struct Aluno programacao_1[10];
	struct Aluno sis_informacao[10];
	int main() {

	int i = 0, j = 0;
	char nome[50], matricula[20], disciplina[20];
	while (1) {
		printf("\n\n\t  -BEM VINDO A LISTA DE SISTEMAS- \n");
		printf(" \t ################################ \n\n");
		printf("Digite o nome do aluno |OU| 'fim' para encerrar a entrada de dados \n");
		printf("--> ");
		scanf("%s", nome);
		if (strcmp(nome, "fim") == 0)
		break;

		printf("Digite a matricula do aluno: \n");
		printf("--> ");
		scanf("%s", matricula);
		printf("Digite a disciplina em que o aluno esta matriculado  |programacao_1|  OU  |sis_informacao| \n ");
		printf("--> ");
		scanf("%s", disciplina);

		if (strcmp(disciplina, "programacao_1") == 0) {
				if (i < 10) {
				strcpy(programacao_1[i].nome, nome);
				strcpy(programacao_1[i].matricula, matricula);
				i++;

				}
				else 
				{
				printf("Nao ha vagas disponiveis na disciplina de Programacao 1.\n");
				}

				}
					else if (strcmp(disciplina, "sis_informacao") == 0) {
							if (j < 10) {
							strcpy(sis_informacao[j].nome, nome);
							strcpy(sis_informacao[j].matricula, matricula);
							j++;

								}
								else 
								{
								printf("Nao ha vagas disponiveis na disciplina de Sistema de Informacao.\n");
								}
								}
								else 
								{
								printf("\n DISCIPLINA INVÁLIDA.\n");
								}
								}

								int opcao;
								
								while (1) {
								printf("\t\n\t ****************");
								printf("\n\t* Menu de Consulta *\n\n");
								printf("\t ****************\n\n");
								
								printf("\t   ***************************************************\n");
								printf("\t   *   1. Todos os alunos de Programacao 1             *\n");
								printf("\t   *   2. Todos os alunos de Sistema de Informacao   *\n");
								printf("\t   *   3. Sair do programa                           *\n");
								printf("\t   *   Digite a opcao desejada:                      *\n");
								scanf("%d", &opcao);
								if (opcao == 1) {
								printf("\nAlunos de Programacao 1:\n");
								for (int k = 0; k < i; k++) {
								printf("%s -- %s\n", programacao_1[k].nome, programacao_1[k].matricula);
								}
								}
								else if (opcao == 2) {
								printf("\nAlunos de Sistema de Informacao:\n");
								for (int k = 0; k < j; k++) {
								printf("%s -- %s\n", sis_informacao[k].nome, sis_informacao[k].matricula);
								}
								}
								else if (opcao == 3) {
								printf("\nAlunos que fazem ambas as disciplinas:\n");
								for (int k = 0; k < j; k++) {
								printf("%s -- %s\n", sis_informacao[k].nome, programacao_1[k].matricula, sis_informacao[k].matricula);
							    }
								}
								}
								}