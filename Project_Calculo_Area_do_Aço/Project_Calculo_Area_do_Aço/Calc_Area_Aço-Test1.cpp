#include<stdio.h>
#include<stdlib.h>

void main() {

	// variaveis
	double As, D, Bx, FCD, SYK;
	int TipAco;

	double A=0.68;
	double B=100;

	//Entrada de dados

	printf("QUE TIPO DE AÇO SERÁ UTILIZADO? \n");
	scanf_s("%d", &TipAco);

	printf("ENTRE COM O VALOR DO D: \n");
	scanf_s("%f" , & D);

	printf("ENTRE COM O VALOR DO BETAx: \n");
	scanf_s("%f" , &Bx);

	printf("ENTRE COM O VALOR DO FCD: \n");
	scanf_s("%f" , &FCD);

	printf("POR FIM ENTRE COM O VALOR DO SYK: \n");
	scanf_s("%f" , &SYK);

	//PROCESSANDO

	switch (TipAco) {
		case 1:

			if (SYK > 0)  printf("\n ATENÇÃO!! SYK DEVE SER MAIOR QUE ZERO! GENTILEZA VERIFICAR OS VALORES.");
			        
			else if ((Bx < 0) && (Bx >0.645))  printf("\n ATENÇÃO! Beta X deve ter valores entre 0 e 0,645!");

			else if ((FCD >= 0) && (FCD <= 1.754))

				//CALCULO DA FORMULA
				As = (A*B*D*Bx*FCD)/SYK;
			
				printf("\n As (Area do Aço) para os dados informados é: %2.f\n ", As);
	
				

		}
	

	system("pause>>null");
 }