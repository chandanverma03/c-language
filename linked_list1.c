#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node * next;
};
void l_l_traversal(struct Node* ptr){
	while(ptr!=NULL){
	printf("Element : %d\n",ptr->data);
	ptr = ptr->next;
	}
}
int main(){
	struct Node*head;
	struct Node*second;
	struct Node*third;
	
	//Allocate memory for nodes inthe linked list in heap
	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
	
	//Link first and second node 
	head->data = 15;
	head->next = second;
	
	//Link second and third node 
	second->data = 30;
	second->next = third;
	
	//Terminate the list at the third node
	third->data = 45;
	third->next = NULL;
	
	l_l_traversal(head);
	return 0; 
	
}
