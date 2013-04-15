#include<stdio.h>
#include<cs50.h>
int main(void)
{
int size,i,j,k;
do
{
printf("enter size");
size=GetInt();
if((size<0) || (size>23))
printf("retry");
}
while(size>23 || size<0);
for(i=2;i<=size+1;++i)
{
for(k=1;k<size+2-i;++k)
{
printf(" ");
}
for(j=1;j<=i;j++)
{
printf("#");
}
printf("\n");
}
return 0;
}
