#include<stdio.h>
#include<conio.h>
void insertion_sort(int a[],int n);
void main()
{
	int a[30],n,i;
	clrscr();
	printf("\n Enter size of array :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("\nEnter element of array a[%d]:",i);
	scanf("%d",&a[i]);
	}
	printf("\n Before sorting list \n");
	for(i=0;i<n;i++)
	{
	printf("\nThe element of array %d:",a[i]);
	}
	insertion_sort(a,n);
	getch();
}
void insertion_sort(int a[],int n)
{
	int i=0,no,c=1,j=0;
	while(c<=n)
	{
		no=a[c-1];
		c=c+1;
		i=j-1;
		while(no<a[i] && i>=0)
		{
			a[i+1]=a[i];
			i=i-1;	
		}
	a[i+1]=no;
	j=j+1;	
	}
	printf("\nAfter sorting the numbers are :\n");
	for(i=0;i<n;i++)
	printf("\n%d",a[i]);
}

