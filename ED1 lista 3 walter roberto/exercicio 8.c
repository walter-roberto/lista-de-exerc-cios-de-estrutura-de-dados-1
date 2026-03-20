#include <stdio.h>
int main(){
	int V[6];
	
	for(int i=0;i<5;i++){
		scanf("%d",&V[i]);
		}
		
	for(int i=5;i>-1;i--){
		printf("[%d]",V[i]);
	}	
	
	
	return 0;
}