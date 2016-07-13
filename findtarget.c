#include <stdio.h>

int main(void) {
	int a[100],i,n,tar,j,b,val1,val2;
	static flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&tar);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			b=0;
			b=a[i]+a[j];
			if(tar == b)
			{	
			
				val1=a[i];
				val2=a[j];
				flag++;
			break;
			}
			
		}
	if(flag>0)
			break;
	}
	printf("%d %d",val1,val2);
	return 0;
}
