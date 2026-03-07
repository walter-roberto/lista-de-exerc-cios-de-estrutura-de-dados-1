#include<stdio.h>
int main(){
int V[5],par=0;
for (int i = 0; i <= 5; i++)
{
    
    scanf("%d",&par);
    if (par % 2== 0)
    {
        V[i]=par;
    }
    else
    {
      printf("digite um valor par\n");
      i--; 
    }

}
for (int a = 5; a < 0; a--)
{
    printf("%d",V[a]);
}
return 0;
}