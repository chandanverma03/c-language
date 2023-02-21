//question 1 :=>
//#include<stdio.h>
//int main()
//{
//	int c = 10;
//	if (c!= 10)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("No")
//	}
//	printf("C Programming");
//	return 0;
//}

// question 2 :=> write a c program to check weather the given no. is even or not if the number is even then print input is even
//if it is odd then print the output odd and take the input from the user

//#include<stdio.h>
//int main()
//{
//	int a;
//	printf("Enter a number : ");
//	scanf("%d",&a);
//	if (a%2 == 0)
//	{
//		printf("Input %d is even",a);
//	}
//	else
//	{
//		printf("Input %d is odd",a);
//	}
//	return 0;
//}

/* question 3 :=> write a c programm to check weather a the given number is divisble by 4 and 6 if the number is divisble print 
the number is divisble by 4 and 6 and take the input from the user*/

//#include<stdio.h>
//int main()
//{
//	int a;
//	printf("Enter the number : ");
//	scanf("%d",&a);
//	if (a%4==0 && a%6==0)         //&& used for 'and' 
//	{
//		printf("Number is divisble by 4 and 6");
//	}
//	else{
//		printf("Number is not divisble by 4 and 6");
//	}
//	return 0;
//}

// another way of writing if and else
//#include<stdio.h>
//int main()
//{
//	int c;
//	scanf("%d",&c);
//	c%2==0?printf("even"):printf("odd");
//}

// question 4 :=> take three number from the user and print the greater number about them
//#include<stdio.h>
//int main()
//{
//	int a,b,c;
//	printf("Enter three number : ");
//	scanf("%d %d %d",&a,&b,&c);
//	if ( a>b && a>c){
//		printf("%d is greater than %d and %d",a,b,c);
//	}
//	else if(b>a && b>c)
//	{
//		printf("%d is greater than %d and %d", b,a,c);
//	}
//	else if(c>b && c>a){
//		printf("%d is greater than %d and %d",c,a,b);
//
//	}
//	else{
//		printf("All are equal");
//	}
//	return 0;
//}

// question 5 :=> write a c programm to check the second largest number
//#include<stdio.h>
//int main()
//{
//	int a,b,c;
//	printf("Enter three numbers : ");
//	scanf("%d %d %d",&a,&b,&c);
//	if (a>b && a>c){
//		if(b>c){
//			printf("%d is second largest number",b);
//		}
//		else{
//			printf("%d is second largest number",a);
//		}
//	}
//	else if(b>a && b>c)
//	{
//		if(a>c)
//		{
//			printf("%d is second largest number",a);
//		}
//		else{
//			printf("%d is second largest number",c);
//		}
//	}
//	else if (c>a && c>b){
//		if (b>a){
//			printf("%d is second largest number",b);
//		}
//		else{
//			printf("%d is second largest number",a);
//		}
//	}
//	else{
//		printf("All number are equal");
//	}
//	return 0;
//}

// question 6 :=> write a programm to check that number is divisble by 3 or 5 , 3 and 5 and not divisble by 3 and 5

//#include<stdio.h>
//int main()
//{
//	int a;
//	printf("Enter a number: ");
//	scanf("%d",&a);
//	if(a%3==0 && a%5==0){
//		printf("%d is divisble by 3 and 5",a);
//	}
//	else if(a%3==0 || a%5==0){                //|| is used for 'or'
//		printf("%d is divisble 3 or 5",a);
//	}
//	else{
//		printf("%d is not divisble by 3 and 5");
//	}
//	return 0;
//}






