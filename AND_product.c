#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    unsigned int a,b,t,ans;
    int i,j;
    scanf("%d",&t);
    
    for(i=0;i<t;i++)
        {
        ans=~0;
         scanf("%u",&a);
         scanf("%u",&b);
        
         ans=a & b;
       printf("%u\n",ans) ;
    }
    
    
    return 0;
}

