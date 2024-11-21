#include<stdio.h>
#include<conio.h>
#define n 10
int Sequential_Search(int a[],int key);
void main()
{
	int a[n],i,flag=0,key;
	clrscr();
	for(i=0;i<n;i++)
	{
		printf("\nEnter element : [%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("\Enter the element that you want to search : ");
	scanf("%d",&key);
	flag=Sequential_Search(a,key);
	if(flag==1)
		printf("The number found in List");
	else
		printf("The number does not found in List");
	getch();
}
int Sequential_Search(int a[],int key)
{
	int i,flag=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			flag=1;
			break;
		}
	}
	return flag;
}