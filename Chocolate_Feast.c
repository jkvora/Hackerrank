#include<stdio.h>
#include<math.h>
#include<stdlib.h>

 
//void choc(void);

int main()
{
   int i=0;
    int t,n,c,m,no[100000],count=0;
    scanf("%d",&t);
    
    for(i=0;i<t;i++)
    {
            
                         scanf("%d",&n);
                         scanf("%d",&c);
                         scanf("%d",&m);
                           //choc();
         
     int a,b,p,q,r,d;
     a=n/c;
r=a;
   do
   {
     p=a/m;
     q=a%m;
     q=q+p;
       a=q;
       r=r+p;
   }while(a>=m);
     no[count]=(r);
  count++;   
                            
                                      
}
    
     for(i=0;i<count;i++)
    {
   printf("%d\n",no[i]);
}
    
//    getch();
return 0;
}

