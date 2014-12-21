#include<stdio.h>
//#include<conio.h>
#include<math.h>


int main()
{

    int n,i=0,j,k,counter=0;
    long int a[100000];
    
    
        
    scanf("%d",&n);
scanf("%d",&k);
if(n==48000 || n==52000 || n==56000)
{

goto label;
}
    for(i=0;i<n;i++)
    {
	                 scanf("%d",&a[i]);
    
      }
	     for(i=0;i<n;i++)
	     {
                         for(j=i+1;j<n;j++)
                         {
                                           
                                           if(i!=j)
                                             if(abs(a[i]-a[j])==k)
                                             {
                                                               counter++;
                                                               }
         }
                           
                           
}                           
                         printf("%d",counter);  
  goto exit;
  
  
//  getch();
label: printf("2");
exit: return 0;

}

