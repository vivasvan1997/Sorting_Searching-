
/* An array has n elements, where n is the size of the array, the programs tells whether
   the array has repeating elements or not.
   Note:the numbers in the array should be lesser than n.
   */


#include<stdio.h>

int abs(int n)
{
	if(a<0)
		return(n*(-1));
	else
		return n;
}

void input(int a[], int n)
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
}

int main()
{
	int a[100],i,temp,n,c=0;
	FILE *fp;
    	fp=freopen("read.txt","r",stdin);
	scanf("%d",&n);
	input(a,n);
	fclose(fp);
	for(i=0;i<n;i++)
	{
		if(a[abs(a[i])]>0 && a[abs(a[i])] !=n)
			a[abs(a[i])]=a[abs(a[i])]*(-1);
		else if(a[abs(a[i])<0||a[abs(a[i])]==n)
		{
			c=1;
			break;
		}
		else
			a[abs(a[i])]=n;

	}
	fp=freopen("write.txt","w",stdout);	
	if(!c)
		printf("\n No");
	else
		printf("\n Yes");
	fclose(fp);
	return 0;
}
		
		
			
