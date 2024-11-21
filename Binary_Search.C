#include<stdio.h>
#include<conio.h>
#define n 5
int Binary_Search(int a[],int key);
void main()
{
	int a[n],i,flag=0,key;
	clrscr();
	printf("Enter element in ascending order only \n");
	for(i=0;i<n;i++)
	{
		printf("\nEnter element a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("Enter the element that you want to search:");
	scanf("%d",&key);
	flag=Binary_Search(a,key);
	if(flag==1)
		printf("The number exist");
	else
		printf("The number does not exist");
	getch();
}
int Binary_Search(int a[],int key)
{

	int LB,UB,mid,flag=0;
	LB=0;
	UB=n-1;
	while(LB<=UB)
	{
		mid = (LB + UB)/2;
		if(key<a[mid])
			UB = mid-1;
		else if (key>a[mid])
			LB = mid +1;
		else if(key == a[mid])
		{
			flag=1;
			break;
		}
	}
	return flag;
}
