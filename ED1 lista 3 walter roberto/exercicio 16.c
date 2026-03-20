#include <stdio.h>
int main(){
	float V[5];
	int cod;
	
	printf("digite valore para preencher o vetor\n");
	for(int i=0;i<5;i++){
		scanf("%f",&V[i]);
	}
	printf("0-sair\n");
	printf("1-ordem direta\n");
	printf("2-ordem inversa\n");
	scanf("%d",&cod);
	
	do{
		switch(cod){
			case 0:
				printf("obrigado");
				break;
			case 1:
				for(int i=0;i<5;i++){
					printf("%.2f",V[i]);
					cod=0;
					break;	
				}
			case 2:
				for(int i=4;i<-1;i--){
					printf("%.2f",V[i]);
					cod=0;
					break;
				}
			default:
			printf("valor invalido favor digitar 0, 1 ou 2\n");
			break;	
		}
	}while(cod!=0);
	
	return 0;
}