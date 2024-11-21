// make sure stack size is fixed
#include<stdio.h>
#include<conio.h>
#define MAX 5
int top=-1;
void push(int s[],int item)
{
	if(top==(MAX-1))
	{
		printf("\n Stack is overflow on Push");
		return;
       }
	top=top+1;
	s[top]=item;

}
int pop(int s[])
{
	if(top==-1)
	{
		printf("\n Stack is Underflow on Pop");
		return -1;
	}
	top=top-1;
	return s[top+1];
}
int peep(int s[],int i) {
	if((top-i+1)< 0 )
	{
		printf("\n Stack is Underflow on Peep ");
		return -1;
	}
	return s[top-i+1];

}
void change(int s[],int item,int i){

	if((top - i +1)  < 0)
	{
		printf("\n Stack overflow / size of stack is out of bounds ");
	}
	s[top-i+1]=item;
}
void peek(int s[])
{
	if(top==-1)
	{
		printf("\n stack is empty");

	}
	printf("\n Topped element :  %d",s[top]);
}
void display(int s[])
{
	int i;
	if(top==-1)
	{
		printf("\n stack is Undeflow on Display");
	}
	for(i=0;i<=top;i++)
	{
		printf("%d\t",s[i]);
	}
	getch();

}
void main()
{
	int item,ch=1,i,s[MAX-1];
	clrscr();
	do{
	printf("\n stack example : ");
	printf("\n  1 push :  ");
	printf("\n 2 pop : ");
	printf("\n 3. Peep : ");
	printf("\n 4. Change : ");
	printf("\n 5. display : ");
	printf("\n 6 .Peek:");
	printf("\n 7. exit ");
	printf("Enter choice :");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		printf("Enter item /data : ");
		scanf("%d",&item);
		push(s,item);
		break;
		case 2:
		item=pop(s);
		if(item!= -1)
		{
			printf("\n %d poped from stack",item);
		}
		break;
		case 3:
		printf("\n Enter position : ");
		scanf("%d",&i);
		item=peep(s,i);
		if(item != -1)
		{
			printf("\n %d",item);
		}
		break;
		case 4:
		printf("\n Enter item : ");
		scanf("%d",&item);
		printf("\n Enter position : ");
		scanf("%d",&i);
		change(s,item,i);
		break;
		case 5:
		display(s);
		break;
		case 6:
		peek(s);
		break;
		case 7:
		exit(0);
		default:
		printf("\n enter right choice: ");

	}
	}while(ch<=7);
	getch();
}