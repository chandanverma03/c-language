//                              While loop 
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	while(a>0){
//		printf("%d\n",a);
//		a = a-1;
//	}
//	printf("stop");
//	return 0;
//}

//#include<stdio.h>
//int main(){
//	int n = 10;
//	while(n>0){
//		n = n-1;
//		printf("%d\n",n);
//	}
//	printf("Stop");
//	return 0;
//}

//#include<stdio.h>
//int main(){
//	int i = 0;
//	while(i<5){
//		printf("hii\n");
//		i++;
//	}
//	return 0;
//	
//}

//#include<stdio.h>
//int main(){
//	int gfg1 = 1;
//	int gfg2 = 1;
//	while(gfg1<10){
//		gfg2 = gfg2 + 1;
//		printf("Infinity");
//	}
//	return 0;
//}

//write a c program to print the multiplication table
//#include<stdio.h>
//int main(){
//	int a,b = 1;
//	printf("Enter any number : ");
//	scanf("%d", &a);
//	while(b<11){
//		printf("%d * %d = %d\n",a,b,a*b);
//		b++;
//	}
//	return 0;
//}

//                         For loop :=> for(initialization; condition; updation;)
//#include<stdio.h>
//int main(){
//	int a,b;
//	printf("Enter any number : ");
//	scanf("%d",&a);
//	for(b=1;b<=10;b++){
//		printf("%d*%d=%d\n",a,b,a*b);
//	}
//	return 0;
//}

//write a c programm to print some n natural number using for loop
#include<stdio.h>
int main(){
	int a,b,s=0;
	printf("Enter any number : ");
	scanf("%d",&a);
	for(b=1;b<=a;b++){
		s = s+b;
//		printf("%d\n",s);
	}
	printf("%d\n",s);
	return 0;
}





