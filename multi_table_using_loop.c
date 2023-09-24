#include <stdio.h>
int main()
{
	printf("\n\n\t\t<<<Welcome to C Programming>>>\n\n\n\n");
	int num,i;
	printf("\tEnter the number whose table you want to print := ");
	scanf("%d",&num);
	for( i=1;i<=10;i++){
		printf("\n\t\t\t%d x %d = %d",num,i,num*i);
	}
	return 0;
}


