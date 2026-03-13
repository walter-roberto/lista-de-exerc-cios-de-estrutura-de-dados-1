#include <stdio.h>
int main(){
	float A[9],B[9]; 
	int i=0;
	for(i=0;i<10;i++){
		scanf("%f",&A[i]);
	}
	for(i=0;i<10;i++){
		B[i]=A[i]*A[i];
	}
	
	for(i=0;i<10;i++){
		printf("[%.2f] ",A[i]);
	}
	printf("\n");
	
	for(i=0;i<10;i++){
		printf("[%.2f] ",B[i]);
	}
	return 0; 
}
