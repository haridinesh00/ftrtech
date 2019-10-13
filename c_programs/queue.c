//A program to perform operation in queue
#include<stdio.h>
int queue[10],front,rear,n,f=0;
void insert(int value)
{
if(f==0)
{
front=0;
f++;
}
if(rear>n-1)
printf("Queue Overflow!!!");
else
{
rear++;
queue[rear]=value;
}
}
void delete()
{
int element;
if(front<0)
printf("Queue underflow!!!\n");
else
{
element=queue[front];
front++;
}
printf("Popped element is: %d\n",element);
}
int main()
{
int value,i,choice,e;front=-1;rear=-1;
printf("Enter the size of Queue\n");
scanf("%d",&n);
do
{
printf("Choose desired operation\n");
printf("1.Insert\n2.Delete\n3.Display\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter the value\n");
scanf("%d",&value);
insert(value);
break;
case 2:
delete();
break;
case 3:
printf("Queue elements are: ");
for(i=front;i<=rear;i++)
printf("%d ",queue[i]);
printf("\n");
break;
default:
printf("Wrong Choice!!!");
}
printf("Enter 1 to continue or press any number to exit!!!\n");
scanf("%d",&e);
}while(e==1);
return 0;
}
