#include <stdio.h>
void main() 
{
int n,j,i;
printf("Enter the number:");
scanf("%d",&n);
for (int i = 1; i <= n; i++) 
{
for (int j = 1; j <= i; j++) 
{
printf("%d", i);
}
printf("\n");
}
}

