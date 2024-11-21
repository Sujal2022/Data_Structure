#include<stdio.h>   
#include<conio.h>
#define n 8
 void print(int a[])
 {
    int i;
    for(i = 0; i < n; i++)
    {
	printf("%d ",a[i]);
    }
   }
 void bubble(int a[]) // function to implement bubble sort
 {
   int i, j, temp;
   for(i = 0; i < n; i++)
    {
      for(j = i+1; j < n; j++)
	{
	    if(a[j] < a[i])
	    {
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	    }
	}
    }
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
    bubble(a);
    printf("\nAfter sorting array elements are - \n");
    print(a);
    getch();
}