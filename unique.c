#include <stdio.h>

int main(void) {
int j,a[100],i,n,flag;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{	flag=0;
	for(j=0;j<n;j++)
	{
		if(a[i] == a[j])
		{
		flag++;
		}
		else
		{
		continue;
		}
	}
//	printf("%d",flag);
if(flag == 1)
printf("%d",a[i]);
}
return 0;
}
