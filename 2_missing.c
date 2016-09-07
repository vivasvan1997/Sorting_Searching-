



#include<stdio.h>
#define max 100

int fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
		f*=i;
	return f;
}

void input(int a[], int n)
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&n);
}



int main(void)
{
	int a[max],i,n,sum,sum_a,prod,prod_a,r1,r2,root;
	FILE *fp;
	sum_a=0;
	prod_a=1;
	
	fp=freopen("read.txt","r",stdin);
	scanf("%d",&n);
	sum=n*(n+1)/2;
	prod=fact(n);
	input(a,n);
	fclose(fp);
	
	for(i=0;i<n;i++)
	{
		sum_a+=a[i];
		prod_a*=a[i];
	}
	r1=sum-sum_a;
	r2=prod/prod_a;
	root=sqrt((pow(sum_a,2)-(4*prod_a));

	fp=freopen("write.txt","w",stdout);
	printf("  %d",(sum_a+root)/2);
	printf("  %d",(sum_a-root)/2);
	fclose(fp);
	return 0;
}
		
