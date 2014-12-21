#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>



int  main()
{
	
int n,i,j,count=0;
char test='a';
char *s;
char a[100][100];

scanf("%d",&n);



for(i=0;i<n;i++)
{
	//printf("%d:",i+1);
	scanf("%s",a[i]);
}



for(i=0;i<26;i++)
{
	
	for(j=0;j<n;j++)
	{
		
		s=strchr(a[j],test);
		
if(s=='\0')
{
	
	break;
}
		
	}
if(j==n)
{
	count++;
}
test++;	
}


printf("%d",count);

return 0;
}
