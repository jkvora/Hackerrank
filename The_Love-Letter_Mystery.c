#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>



int  main()
{
	
	int i,j,t,m,count=0,p;
	char a[10000];

	scanf("%d",&t);
	
	
	for(i=0;i<t;i++)
	{
		
		scanf("%s",a);
		count=0;
		m=strlen(a);
	//	printf("%d ",m);
		for(j=0;j<(m/2);j++)
		{
		
			if(a[j]!=a[m-j-1])
			{	
				//p=a[j]-a[m-j];
			//	printf("%d %d ",a[j],a[m-j-1]);
				count=count+abs(a[j]-a[m-j-1]);
				//printf("%d  ",abs(a[j]-a[m-j]));
			}
	
		}		
	
	printf("%d\n",count);
	
	}
	



	
	
	
	return 0;
	
}
