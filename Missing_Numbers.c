#include<stdio.h>
//#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
#include<math.h>

int ans[1000000];
int a[1000000],b[1000000];
//char a[10000],b[10000];

int main()
{
    
    int n,m,i,j,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
   { scanf("%d",&a[i]); ans[abs(a[i])]++; }
    
    scanf("%d",&m);
    
    for(i=0;i<m;i++)
   {
                     scanf("%d",&b[i]); 
                        if(b[i]<0)
                            k++;
                     if(ans[abs(b[i])]>0)
                     ans[abs(b[i])]--;
                     else
                     ans[abs(b[i])]--;
                     
    }
    
    for(i=0;i<100000;i++)
    if(ans[i]>0 && k==0 || ans[i]<0)
    { printf("%d ",i);
    
         if(ans[i]>0 && k!=0 && ans[i]<0)
     printf("-%d ",i); 
    }
    
  //  getch();
    return 0;
}

