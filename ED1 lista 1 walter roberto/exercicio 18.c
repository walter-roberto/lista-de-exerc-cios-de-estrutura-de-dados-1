#include<stdio.h>
int main(){
int V[14],valor;
for (int i = 0; i < 15; i++)
{
    scanf("%d",&valor);
    if (valor!=0)
    {
        V[i]=valor;
    }
    else
    {
        i--;
    }
    
}
    return 0;
}