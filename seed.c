#include <stdio.h>

int main(void) 
{
int a,temp,seed,b=1,t,tot;

scanf("%d %d",&a,&seed);
temp=a;
	
while(temp != 0 )
{
	b= b*(temp%10);

	temp=temp/10;
}
tot= a*b;
if(tot == seed)
printf("It is a seed");
else 
printf("It is not a seed");
	return 0;
}
