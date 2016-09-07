
/* An array consists of n numbers, the program gives the number, that repeats odd
   number of times */


#include<stdio.h>
#include<stdlib.h>
#define max 100
void input(int a[], int n)
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&n);
}


int main()
{
        int i,n,a[max],temp=0;
    	FILE *fp;
    	fp=freopen("read.txt","r",stdin);
    	scanf("%d",&n);
    	input(a,n);
    	fclose(fp);
    	temp=a[0];
    	for(i=1;i<n;i++)
    	{    
		temp=temp^a[i];
    	}
    
    	fp=freopen("write.txt","w",stdout);
    	printf("%d",temp);
    	fclose(fp);
    	return 0;
}
