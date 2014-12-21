#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main()
    {
   long long int t,a,b,x,i,temp,temp2;
    
    
    scanf("%lld",&t);
    
    
    for(i=0;i<t;i++)
        {
        scanf("%lld",&a);
        scanf("%lld",&b);
        scanf("%lld",&x);
        
       
            temp2=pow(a,b);
        if(a==1)
            {
            printf("1\n");
        }
       else if(temp2>x)
            {
            temp=temp2%x;
            if(temp<=x/2)
            printf("%lld\n",temp2-temp);
            else
              printf("%lld\n",temp2+x-temp);   
        }
        else
            {
            temp=temp2%x;
            if(temp<=x/2)
            printf("0\n");
            else
              printf("%lld\n",x); 
         //   printf("0\n");
        }
        
        
        
        
        
    }
    
    
    return 0;
}
