#include <stdio.h>
int main(){
    int V[7],X,Y;
    for (int i = 0; i <= 7; i++)
    {
        scanf("%d",&V[i]);
    }
    printf("digite dois valores entre 0 e 7 difentes");
    scanf("%d",&X);
    scnaf("%d",&Y);
    printf("%d,%d o resultado da soma das duas posiçoes e",V[X]+V[Y]);
    return 0;
}