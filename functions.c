//#include<stdio.h>              //...
//void sum()                     //sum : this is user defined funtion
//{
//	int a,b;
//	printf("Enter two numbers : ");
//	scanf("%d %d",&a,&b);
//	printf("Sum of two numbers : %d\n",a+b);
//}
//void main(){     //we can also call the function after the header file(...)
//	sum();
//	printf("Hello");  //hello will be print after the sum
//}

//Question:=> write a user defined function to find the factors of given number 
//#include<stdio.h>
//void factor(){
//	int a,b;
//	printf("Factors are : ");
//	for(b=1;b<=a;b++){
//		if (a%b==0){;
//		printf("%d\n",b);
//		}
//	
//	}
//}
//int main() {
//	int x;
//	printf("Enter a number : ");
//	scanf("%d",&x);
//	factor(x);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main(){
//	int a,b,c;
//	printf("Enter two numbers : ");
//	scanf("%d %d",&a,&b);
//	c = pow(a,b);
//	printf("%d is the power of %d and output is %d",b,a,c);    //a is the number and b is power of a
//}

//#include<stdio.h>
//#include<math.h>
//int main(){
//	float a;
//	int b;
//	printf("Enter a number : ");
//	scanf("%f",&a);
//	b = ceil(a);             
//	printf("%d",b);
//}

#include<stdio.h>
#include<math.h>
int main(){
	float a;
	int b;
	printf("Enter a number : ");
	scanf("%f",&a);
	b = floor(a);             
	printf("%d",b);
}





