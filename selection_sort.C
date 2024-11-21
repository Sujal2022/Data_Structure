#include<stdio.h>
#include<conio.h>
#define n 6
void selection_sort(int a[]) // function to implement bubble sort
 {
   int i, j, min,p;
   for(i = 0; i < n; i++)
    {
      min=a[i];
      p=i;
      for(j = i+1; j < n; j++)
	{
	    if(a[j] < min)
	    {
		min=a[j];
		p=j;
	    }
	}
	if(a[i]!=a[p])
	{
		a[p]=a[i];
		a[i]=min;
	}
    }
printf("\n After Selection sort : ");
for(i=0;i<n;i++)
printf("\n%d",a[i]);
 }
void main ()
{
    int i, j,temp;
    int a[10];
    clrscr();
    for(i=0;i<n;i++)
	{
	printf("\nEnter element for array a[%d]:",i);
	scanf("%d",&a[i]);
	}
	printf("\nThe element Before sorting is:");

	for(i=0;i<n;i++)
	{
	printf("\nEnter element for array %d",a[i]);
	}
    selection_sort(a);
   getch();
}





/*#include<stdio.h>
#include<conio.h>
void selection_sort( int *a,int);
void main()
{
	int *a,i,n;
	clrscr();
	printf("\nEnter size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter a[%d] element:",i);
		scanf("%d",&a[i]);
	}
	printf("\n Before sorting");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	selection_sort(a,n);
	getch();
}
void selection_sort(int *a,int n)
{
	int i,j,min,p;
	for(i=0;i<n;i++)
	{
		min=a[i];
		p=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				p=j;
			}
		}
		if(a[i]!=a[p])
		{
			a[p]=a[i];
			a[i]=min;
		}
		printf("\nAfter selection sorting:\n");
		for(i=0;i<n;i++)
			printf("\n %d",a[i]);
	}
}
*/