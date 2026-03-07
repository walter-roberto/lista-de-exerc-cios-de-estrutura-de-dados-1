# include <stdio.h>
int main(){
float V1[9], V2[9];

for (int i = 0; i <= 9; i++)
{
    scanf("%d",&V1[i]);    
}
for (int a = 0; a <= 9; a++)
{
    V2[a]=V1[a]*V1[a];
}
for (int b = 0; b <= 9; b++)
{
    printf("%f\n",V2[b]);
}
return 0;

}