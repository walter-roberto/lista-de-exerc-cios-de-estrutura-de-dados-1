#include<stdio.h>
int main(){
float V[9],soma=0;
int c=0;
for (int i = 0; i <= 9; i++)
{
    scanf("%f",&V[i]);
    if (V[i]>0)
    {
        soma+=V[i];
    }
    else
    {
        c++;
    }
    
}
printf("%.2f a soma dos valores positivos e",soma);
printf("%d a quantia de numeros negativos e",c);
return 0;
}