#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
  int t,a,b,count,i,j,temp;
  scanf("%d",&t);
  for(i=0;i<t;i++)
    {
    scanf("%d",&a);
    scanf("%d",&b);
    count=0;
    temp=sqrt(a);
    for(;(temp*temp)<=b;)
      {
         
      			if((temp*temp)>=a && (temp*temp)<=b)
                  count++;
                temp++;
      
      
       }
    
    printf("%d\n",count);
    
  }
    return 0;
}

