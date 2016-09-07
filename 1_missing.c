
/* The numbers from 1 to n are entered in an array(without any repetations) of size n-1, the program
   will give the missing number  */

#include<stdio.h>

void input(int a[], int n)
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
}

int main()
{

	int a[100],n,i,sum=0,sum_a=0;
	FILE *fp;
   	fp=freopen("read.txt","r",stdin);
	scanf("%d",&n);
	input(a,n-1);
	fclose(fp);
	sum=n*(n+1)/2;
	for(i=0;i<n-1;i++)
		sum_a+=a[i];
	fp=freopen("write.txt","w",stdout);
	printf("\n  %d",(sum-sum_a));
	fclose(fp);
	return 0;
}
