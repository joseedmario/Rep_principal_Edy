#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

void main() {

	// variaveis
	double As, D, Bx, FCD, SYK;
	int Tip;

	double A=0.68;
	double B=100;

	//Entrada de dados

	printf("QUE TIPO DE ACO SERA UTILIZADO? \n");
	printf("|<><><<><><><><><><><><><><><><>|\n");
	printf("|                               |\n");
	printf("| 1 - aco de 30cm               |\n");
	printf("| 2 - aco de 25cm               |\n");
	printf("|                               |\n");
	printf("|<><><<><><><><><><><><><><><><>|\n");
	scanf_s("%d", &Tip);

	printf("ENTRE COM O VALOR DO D: \n");
	scanf_s("%f" , & D);

	printf("ENTRE COM O VALOR DO BETAx: \n");
	scanf_s("%f" , &Bx);

	printf("ENTRE COM O VALOR DO FCD: \n");
	scanf_s("%f" , &FCD);

	printf("POR FIM ENTRE COM O VALOR DO SYK: \n");
	scanf_s("%f" , &SYK);

	//PROCESSANDO

	switch (Tip){
		case 1:	if (SYK > 0)  printf("\nATENCAO!! SYK DEVE SER MAIOR QUE ZERO! GENTILEZA VERIFICAR OS VALORES.");

				else if ((Bx < 0) && (Bx >0.645))  printf("\n ATENÇÃO! Beta X deve ter valores entre 0 e 0,645!");

				else if ((FCD >= 0) && (FCD <= 1.754))

				//CALCULO DA FORMULA
				As = (A*B*D*Bx*FCD) / SYK;

				printf("\n As (Area do Aco) para os dados informados é: %2.f\n ", As);
			break;

		case 2: printf("Codigo em construção!estamos trabalhando para melhor atende-lo");
			break;
	}
	system("pause>>null");
 }
