#include<stdio.h>
int main(){
	float V[15],N1,N2,MG;
	
	for(int i=0;i<15;i++){
		printf("notas do aluno numero %d\n",i+1);
		
		printf("N1\n");
		scanf("%f",&N1);
		
		printf("N2\n");
		scanf("%f",&N2);
		
		V[i]=(N1+N2)/2;
		MG+=V[i];
	}
	
	MG=MG/15;
	printf("a media geral dos 15 alunos e %.1f",MG);
	
	return 0;
}