#include<stdio.h>
//#include<conio.h>
#include<malloc.h>
#include<math.h>
#include<string.h>

int common=0;
int a1[150],b1[150];
char a[10000],b[10000];
     
     
int main()
{
int t,i,j,temp;

      scanf("%s",a); 
      scanf("%s",b);
 
      for(j=0;j<strlen(a)|| j<strlen(b);j++)
     {              if(j<strlen(a))
                    a1[a[j]]++;
     
                      if(j<strlen(b))
                      b1[b[j]]++;
                      }  
    
              for(j=45;j<125;j++)
     {            
                    if(a1[j]>0 && b1[j]>0)
                        if(a1[j]>b1[j])
                        common=common+b1[j];
                        else
                        common=common+a1[j];
     
                
}    
               printf("%d\n",strlen(a)+strlen(b)-2*common);
                                     
//    getch();
}


