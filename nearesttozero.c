#include <stdio.h>
#include<stdlib.h>
int cmpfun(const void*a,const void*b)
{
	return ( *(int*)a - *(int*)b );
}
int main(void) {
	int a[100],b[100],i,n;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	if(a[i]<0)
	{
		b[i]=(-1)*a[i];
	}
	else
	b[i]=a[i];
	}
qsort(b,n,sizeof(int),cmpfun);
for(i=0;i<n;i++)
{
if(a[i] == -(b[0]) || a[i] == b[0])
printf("%d \t",a[i]);
}
return 0;
}
