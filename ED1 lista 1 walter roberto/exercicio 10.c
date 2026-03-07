#include<stdio.h>
int main(){
float V[14],soma;
for (int i = 0; i <= 14; i++)
{
    scanf("%f",&V[i]);
    soma+=V[i];
}
printf("%.2f a media da sala e",soma/15);

return 0;
}