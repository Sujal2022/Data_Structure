#include<stdio.h>
#include<conio.h>
#define max 5
int F=-1, R=-1;
int Q[max];
void Qinsert(int item)
{
	if(R == (max-1))
	{
		printf("\n Queue is overflow in Insert");
		getch();
		return;
	}
	if(F == -1)
	{
		F=0;
	}
	R++;
	Q[R]=item;
}
int Qdelete()
{
	int item;
	if(F == -1 || F > R)
	{
		printf("\n Queue is Underflow on Delete");
		getch();
	}
	item=Q[F];
	if(F==R)
	{
		F=R=-1;

	}
	else{
		F++;
	}
	return item;
}
void display()
{
	int i;
	if(F == -1)
	{
		printf("\n Queue is empty");
		getch();
		return;
	}
	printf("\n Queue is : ");
	for(i=F;i<=R;i++)
	{
		printf("\t %d ",Q[i]);

	}
	getch();
}
void main()
{
	int ch=0,item;
	do
	{
		clrscr();
		printf("\n Simple Queue Operation ");
		printf("\n 1. Insert Element : ");
		printf("\n 2. Delete Element : ");
		printf("\n 3. Display : ");
		printf("\n 4. Exit : ");
		printf("\n Enter your choice : ");
		scanf("\n %d",&ch);
		switch(ch)
		{
			case 1:
			printf("\n Enter item to be inserted :");
			scanf("%d",&item);
			Qinsert(item);
			break;
			case 2:
			item=Qdelete();
			if(item!= 0)
			{
				printf("\n Item deleted is : %d",item);
				getch();
			}
			break;
			case 3:
			display();
			break;
			case 4:
			exit(0);
			default:
			printf("\n Wrong chioce! Try again....");
		}
	}
	while(ch!=4);
	getch();
}


