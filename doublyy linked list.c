




//insertion of element in the begining of doubly linked list 
//#include<stdio.h>
//#include<stdlib.h>
//
//struct node
//{
//struct node *prev;
//int data;
//struct node *next;
//};
//
//int main()
//{
//
//struct node *head,*newnode,*temp, *new;
//head=0;
//int choice=1;
//while(choice)
//{
//newnode=(struct node*)malloc(sizeof(struct node));
//printf("Enter data : ");
//scanf("%d",&newnode->data);
//newnode->prev=0;
//newnode->next=0;
//if(head==0)
//{
//head=temp=newnode;
//}
//else
//{
//temp->next=newnode;
//newnode->prev=temp;
//temp=temp->next;
//}
//printf("Do you want to continue(0,1)?");
//scanf("%d",&choice);
//}
////Traverse
////while(temp != 0){
////	printf("Element : %d",temp->data);
////	temp = temp->next;
////}
//printf("\n");
//int value;
//printf("Enter the value you want to insert at first : ");
//scanf("%d",&value);
//struct node *newnode1;
//newnode1 = (struct node*)malloc(sizeof(struct node));
//newnode1->data = value;
//newnode1->next = head;
//head->prev = newnode1;
//head = newnode1;
//temp=head;
//
//while(temp!=0)
//{
//	
//    printf(" ");
//    printf("%d",temp->data);
//temp=temp->next;
//}
//
//return 0;
//}
//-------------------------------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>

struct node
{
struct node *prev;
int data;
struct node *next;
};

int main()
{

struct node *head,*newnode,*temp;
head=0;
int choice=1;
while(choice)
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter data : ");
scanf("%d",&newnode->data);
newnode->prev=0;
newnode->next=0;
if(head==0)
{
head=temp=newnode;
}
else
{
temp->next=newnode;
newnode->prev=temp;
temp=temp->next;
}
printf("Do you want to continue(0,1)?");
scanf("%d",&choice);
}
//Traverse
//while(temp != 0){
//	printf("Element : %d",temp->data);
//	temp = temp->next;
//}
printf("\n");
int value;
printf("Enter the value you want to insert at last : ");
scanf("%d",&value);
struct node *newnode1;
newnode1= (struct node*)malloc(sizeof(struct node));
temp = head;
while(temp->data!=NULL){
	temp = temp->next;
}
newnode->data = value;
temp->next=newnode1;
newnode->prev= temp;
temp = head;

while(temp!=0)
{
	
    printf(" ");
    printf("%d",temp->data);
temp=temp->next;
}

return 0;
}







