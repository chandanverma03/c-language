#include<stdio.h>
int main(){
	int a= 45;
	int *aptr;
	aptr = &a;
	printf("%d\n",&a);   //Addres of a
	printf("%d\n",a);    //value of a
	printf("%d\n",aptr); //Addres of a
	printf("%d\n",*aptr);//Value of a
}
