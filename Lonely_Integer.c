#include<stdio.h>
//#include<conio.h>


int main()
{

    int n,i=0,m,a[100],counter;
    

    scanf("%d",&n);

    while(i<n)
    {
	      scanf("%d",&a[i]);
	      
		 i++;
	      }
	      i=0;
	      m=0;
	     while(i<n)
	     {
		       counter=0;
		       m=0;
		  while(m<n)
		  {
			if(a[i]==a[m] && m!=i)
			counter++;
			    m++;
			    }

			    if(counter==0)
			    {
			    printf("%d",a[i]);
			    break;
			    }
			    i++;
}
//getch();

 return 0;
}

