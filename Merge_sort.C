#include<stdio.h>
#include<conio.h>
#define n1 5
#define n2 3
#define n3 n1+n2
void Merge_sort(int a[],int b[]);
void main()
{
	int a[20],b[20],i,no;
	clrscr();
	printf("\nEnter first array in ascending order:");
	for(i=0;i<n1;i++)
	{
		printf("\nEnter element: a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("\nEnter second array in asending order:");
	for(i=0;i<n2;i++)
	{
		printf("\nEnter element: b[%d]", i);
		scanf("%d",&b[i]);
	}
	printf("\nThe element of first array is:");
	for(i=0;i<n1;i++)
	{
		printf("\nEnter element of first array: %d", a[i]);

	}
	printf("\nThe element of second array is:");
	printf("\n");
	for(i=0;i<n2;i++)
	{
		printf("\nThe element of first array: %d", b[i]);
	}
	printf("\n");
	Merge_sort(a,b);
	getch();
}
void Merge_sort(int a[],int b[])
{
	int c[n3],i=0,j=0,k=0;
	while(k<n3)
	{
		if(a[i]<b[j])
			c[k++]=a[i++];
		else if(a[i]>b[j])
			c[k++]=b[j++];
		else if(a[i]==b[j])
		{
			c[k++]=a[i++];
			j++;
		}
		if(i==n1 || j==n2)
		break;
       }
       while(i!=n1)
	c[k++]=a[i++];
       while(j!=n2)
	c[k++]=b[j++];
       printf("\nAtfer mege sorting:");
       for(i=0;i<k;i++)
       {
		printf("\n%d",c[i]);
       }
}