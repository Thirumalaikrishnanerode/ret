#include<stdio.h>
int main()
{
int i,j,a;
scanf("%d%d",&i,&j);
for(a=i;a<=j;a++)
{
if(a%2!=0)
{
printf("%d",a);
}
}
return 0;
}
