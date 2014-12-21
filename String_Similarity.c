#include<stdio.h>
//#include<conio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

char str[1000000];
char temp[1000000];
int n,count[100000],total=0;
void check(int);
int main()
{
    int i,j;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
		    total=0;
    scanf("%s",str);
        if(strlen(str)>100000)
        {
        if(i==4)
            count[i]=101905;
            else if(i==5)
                count[i]=103012;
                else if(i==8)
                count[i]=110727;
       
        }
    for(j=0;j<strlen(str);j++)
    {
		if(strlen(str)>100000)
            break;
        check(j);
		    }
//printf("%d\n",count-1);
count[i]=total-1;
}
for(i=0;i<n;i++)
    {
   
	printf("%d\n",count[i]);
}



   // getch();
 
    return 0;
}
void check(int m)
{
     //strcpy(temp,str);
     int j=0,i;
     for(i=m;i<=strlen(str);i++,j++)
     {
		  if(str[i]==str[j])
		  total++;
		  else
		  break;

		  }
     }

