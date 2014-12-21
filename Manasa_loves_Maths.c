#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


int t;
char a[111];

int main()
{
    int i,j,k,p,q,r,count;
 scanf("%d",&t);
 for(i=0;i<t;i++)
 {
                //   j=-1;
                // count=0;
                // printf("\n");
                 fflush(stdin);
                 
              
       scanf("%s",a);
   //    for(j=0;j<strlen(a);j++)
     //  {
       //   a[j]=(a[j]-48);                     
       //}                       
      //  scanf("%s",a);
                j=strlen(a); 
                // printf("\ndone");
            // printf("%d ",strlen(a));   
     //  for(k=0;k<j;k++)          
      //printf("%d ",a[k]);  
     // printf("\n");
    // printf("%d ",j);
      if(j>2)
      {
      for(p=0;p<j;p++)
         for(q=0;q<j;q++)
         {
                 if(p==q)
                 continue;        
            for(r=0;r<j;r++)
                {
                   //*tp=a[p];
                 //  tp[0]=a[p];
                  // printf("%d",atoi(tp)*100);
                   
                   if(r==p)
                   continue;
                   if(r==q)
                   continue;
                              
                 if((((a[p]-48)*100+(a[q]-48)*10+(a[r]-48))%8)==0)
                  {//printf("%d",((a[p]-48)*100+(a[q]-48)*10+(a[r]-48)));  
                   printf("YES"); goto end;}
                            
                            
                }          
                            
            }
         }
         else if(j==2)
         {
             for(p=0;p<j;p++)
             {
                            
                            
                              for(q=0;q<j;q++)
                              {
                                              if(p==q)
                                              continue;
                                               //printf("%d  ",((a[p]-48)*10+(a[q]-48)));
                               if((((a[p]-48)*10+(a[q]-48))%8)==0)
                                  { //printf("%d",((a[p]-48)*10+(a[q]-48)));  
                                  
                                  printf("YES"); goto end;}
                               }
             }
             
             }
             else
             {
                 if(a[0]%8==0)
                  {printf("YES"); goto end;}                             
                 
                 }  
            printf("NO");
    end:  printf("\n");        
                 
                 
                 
}                
    
    
    
//    getch();
    return 0;
}

