#include <stdio.h>
int main(void) {
	int a[100];
	int i,len;
	scanf("%d",&len);
	for(i=0;i<len;i++)
	scanf("%d",&a[i]);
	for(i=len-1;i>=0;i--)
	printf("%d",a[i]);
	return 0;
}
