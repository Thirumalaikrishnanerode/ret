#include<stdio.h>
int main()
{
int i,j;
scanf("%d",&j);
for(i=2;i<=j;i++)
{
if(j%i==0)
{
printf("prime");
}
else
{
printf("not prime");
}
}
return 0;
}
