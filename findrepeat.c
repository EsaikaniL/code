#include <stdio.h>

int main(void) {
	int a[100],b[100],n,i,j,count=0,in,flag,size;
		static int k=0;
			scanf("%d",&n);
				for(i=0;i<n;i++)
					{
							scanf("%d",&a[i]);
									if(i>0)
											{
														for(j=0;j<i;j++)
																	{
																					if(a[i]==a[j])
																									{
																														if(k == 0)
																																			
																																								{
																																														b[k]=a[i];
																																																			k++;
																																																								}
																																																													else
																																																																		{
																																																																								flag=0;
																																																																														
																																																																																				for(in=0;in<k;in++)
																																																																																										{
																																																																																																	if(a[i] == b[in])
																																																																																																								flag++;
																																																																																																															
																																																																																																																					}
																																																																																																																											if(flag==0)
																																																																																																																																	{
																																																																																																																																								b[k]=a[i];
																																																																																																																																															k++;
																																																																																																																																																					}
																																																																																																																																																										}
																																																																																																																																																														}
																																																																																																																																																																	}
																																																																																																																																																																			}
																																																																																																																																																																				
																																																																																																																																																																					}
																																																																																																																																																																						
																																																																																																																																																																							for(i=0;i<k;i++)
																																																																																																																																																																								printf("%d \t",b[i]);
																																																																																																																																																																									
																																																																																																																																																																										
																																																																																																																																																																											
																																																																																																																																																																												return 0;
																																																																																																																																																																												}

