#include<stdio.h>
int main(){
int V[9], maior=0,posicao=0;
for (int i = 0; i <= 9; i++)
{
    scanf("%d",&V[i]);
    if (V[i]>maior)
    {
        maior=V[i];
        posicao=i;
    }
    
}
printf("%d o maior valor e",maior);
printf("%d sua posicao e", posicao);
return 0;
}