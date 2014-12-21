#include<stdio.h>
//#include<conio.h>

int t,n,ans[100000],k=0;
void cal(int);
int main()
{
    int i,j;
    scanf("%d",&t);
    
    for(i=0;i<t;i++)
    {
                    scanf("%d",&n);
                    cal(n);
                    
                    
                    }
    
    for(i=0;i<k;i++)
    {
                    printf("%d\n",ans[i]);
    
                    
                    
                    }
    
    
    
    //getch();
    return 0;
}
void cal(int p)
{
     int i,temp;
     temp=1;
     for(i=0;i<p;i++)
     {
                     if(i%2!=0)
                     temp=temp+1;
                     else
                     temp=temp*2;
                     
                     
                     }
     
     ans[k]=temp;
     k++;
     }

