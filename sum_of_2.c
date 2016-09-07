/* An array consists of n elements, where n is the size of the array, the program finds
   two numbers, say a and b such that their sum is equal to k i.e a+b=k  */



#include<stdio.h>


void quick_sort(int a[],int l,int u)
{
    int j;
    if(l<u)
    {
        j=partition(a,l,u);
        quick_sort(a,l,j-1);
        quick_sort(a,j+1,u);
    }
}
 
int partition(int a[],int l,int u)
{
    int v,i,j,temp;
    v=a[l];
    i=l;
    j=u+1;
    
    do
    {
        do
            i++;
            
        while(a[i]<v&&i<=u);
        
        do
            j--;
        while(v<a[j]);
        
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);
    
    a[l]=a[j];
    a[j]=v;
    
    return(j);
}

void input(int a[], int n)
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
}


int main()
{
	int a[100],i,n,k,c=0;
	FILE *fp;
	fp=freopen("read.txt","r",stdin);
	scanf("%d",&n);
	input(a,n);
	scanf("%d",&k);
	fclose(fp);
	r=n-1;
	l=0;
	quick_sort(a,l,r);
	while(l<r)
	{
		if(a[l]+a[r]==k)
		{	
			c=1;
			break;
		}
		else if(a[l]+a[r]<k)
			l++;
		else
			r--;
	}
	fp=freopen("write.txt","w",stdout);
	if(c)
		printf("\n Not Found");
	else
		printf("\n  %d  %d ",a[l],a[r]);
	fclose(fp);
	return 0;
}

	
	
