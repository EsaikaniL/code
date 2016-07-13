#include <stdio.h>

int main(void) {
	int n,j,tot,a[100],b[100],c[100],i,div,div2,flag=0;
	float avg,avg2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		tot=0;avg=0;div=i+1,div2=n-div;
		for(j=0;j<=i;j++)
		{
		tot=tot+a[j];
		}
		avg=(float)tot/div;
//printf("%f \t",avg);
tot=0;
		for(j=i+1;j<n;j++)
		{
		tot=tot+a[j];
		}
	//	printf("%d",div2);
		avg2=(float)tot/div2;
//	printf("%f \t",avg2);
	if(avg == avg2)
	{printf("[");
			for(j=0;j<=i;j++)
		{
		printf("%d \t",a[j]);
		}
		printf("] \n");
		printf("[");
			for(j=i+1;j<n;j++)
		{
	printf("%d \t ",a[j]);
		}
		printf("]");
		flag++;
	break;
	}
	
	}
	if(flag==0)
	{
		printf("It is not possible");
	}
	return 0;
}
