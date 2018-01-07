#include <stdio.h>
#include<string.h>
void sortchar(char *p ,int n);
int main()
{   
	char a[1000];int t;
   gets(a);
   t=strlen(a);
   sortchar(a,t );
   puts(a);
	return 0;
}
void sortchar(char *p,int n)
{
	int i,j,k,m;
	for(i=0;i<(n-1);i++)
	{    k=i;
		for(j=i+1;j<n;j++)
		{
			if(*(p+k)>*(p+j))
			k=j;	
    	}
	  m=*(p+i);
	  *(p+i)=*(p+k);
	  *(p+k)=m; 	
      }
		
 } 
