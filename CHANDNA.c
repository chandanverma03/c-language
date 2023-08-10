#include<stdio.h>
union number{
	char name[20];
	int a;
	double a1;
};
int main(){
	union number n;
	printf("%d",sizeof(n));
}