#include <stdio.h>
int main(){
	int V[50];
	
	for(int i=0;i<50;i++){
	V[i]=(i+5*i)%(i+1);
    }
    
    for(int i=0;i<50;i++){
    	printf("[%d]\n",V[i]);
	}
	
	
	return 0;
}