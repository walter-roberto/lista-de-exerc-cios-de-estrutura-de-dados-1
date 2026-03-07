#include<stdio.h>
int main(){
int V[10],i=0,valor;

while (i<10)
{
    scanf("%d",&valor);
    int x=0;
    for (int a = 0; a < 10; a++)
    {
        if (valor==V[a])
        {
            x=1;
            break;
        }
        
    }
    if (x==0)
    {
        V[i]=valor;
        i++;
    }
}
for (int b = 0; b < 10; b++)
{
    printf("%d",V[b]);
}


    return 0;
}