#include <stdio.h>
int main(){
	float V[2],baixo,alturabaixo,alto,alturaalto;
	
	printf("digite os valores para preencher o numero do aluno\n");
	scanf("%f",&V[0]);
	
	printf("digite a altura do aluno\n");
	scanf("%f",&V[1]);
	
	baixo=V[0];
	alturabaixo=V[1];
	alto=V[0];
	alturaalto=V[1];
	
	for(int i=0;i<9;i++){
		printf("proximo aluno\n");
		
		printf("digite o numero do aluno\n");
		scanf("%f", &V[0]);
		
		printf("digite a altura do aluno\n");
		scanf("%f", &V[1]);
		
		if(V[1]<alturabaixo){
			alturabaixo=V[1];
			baixo=V[0];
			}
		if(V[1]>alturaalto){
			alturaalto=V[1];
			alto=V[0];
			}
		
	}
	printf("o numero e altura do aluno mais baixo e:\n");
	printf("%.0f  %.2f\n",baixo,alturabaixo);
	printf("\n");
	printf("o numero e altura do aluno mais alto e\n");
	printf("%.0f  %.2f\n",alto,alturaalto);
	
	
	
	return 0;
}