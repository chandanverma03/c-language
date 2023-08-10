//#include<stdio.h>
//int main(){
//	int a=8,*ptr;
//	ptr = &a;
//	printf("%d\n",a);
//	printf("%d\n",&a);
//	printf("%d\n",ptr);
//	printf("%d\n",*ptr);
//	*ptr=100;
//	printf("%d\n",a);
//	printf("%d\n",*ptr);
//}
//
//#include<stdio.h>
//int main(){
//	int a = 8;
//	float b = 234.34432;
//	void *ptr;
//	ptr = &a;
//	printf("%d\n",*(int*(ptr)));
//	ptr = &b;
//	printf("%f",(*(float*)(ptr)));
//}
//
//
//#include<stdio.h>
//int main(){
//	int a=8;
//	int b=234;
//	int*ptr,*aptr;
//	aptr=&a;                                //ptr is a wild pointer 
//}

//#include<stdio.h>
//int main(){
//	int a[] = {23,45,1,2,67,89};
//	printf("%d\n",a);
//	printf("%d\n",&a);
//	printf("%d\n",&a[0]);
//	printf("%d\n",a[0]);
//	int *b;
//	b = a;
//	printf("%d\n",b);
//	printf("%d\n",b[3]);
//	printf("%d\n",*(b+2));
//}


//write a c program to print the values of the array the array conatins five elements print the values
//using its memory loaction
#include<stdio.h>
int main(){
	int a[6] = {23,45,1,2,67,89};
	int i;
	for(i=0;i<6;i++){
		printf("%d\n",*(a+i));
	}
}



