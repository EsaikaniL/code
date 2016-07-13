#include <stdio.h>

int main(void) {
	int a[100],b,n,i,j,count=0,in,flag,size;
	static int k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
		for(i=0;i<n;i++)
		{
			for(j=0;j<i;j++)
			{
				if(a[i]==a[j])
				{
						
						b=a[i];
				flag++;
				break;
					
				}
			}
			if(flag>0)
			break;
			
		}
	
	
	

	printf("%d \t",b);
	
	
	
	return 0;
}
