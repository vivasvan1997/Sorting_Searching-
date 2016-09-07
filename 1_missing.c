
#include<stdio.h>

void input(int a[], int n)
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&n);
}

int main()
{

	int a[100],n,i,sum=0,sum_a=0;
	FILE *fp;
   	fp=freopen("read.txt","r",stdin);
	scanf("%d",&n);
	input(a,n);
	fclose(fp);
	sum=n*(n+1)/2;
	for(i=0;i<n;i++)
		sum_a+=a[i];
	fp=freopen("write.txt","w",stdout);
	printf("\n  %d",(sum-sum_a));
	fclose(fp);
	return 0;
}