//#include<stdio.h>
//int main()
//{
//	int x;
//	printf("Enter a number : ");
//	scanf("%d",&x);
//	if(x%2==0)
//		goto even;           // even is label
//	else
//		goto odd;
//	even:printf("%d is even number !",x);
//	return;
//	odd:printf("%d is odd number !",x);
//	
//}


//#include<stdio.h>
//int main(){
//	int a,b,c;
//	printf("Enter a number : ");
//	scanf("%d",&c);
//	for(a=1;a<=c;a++){
//		for(b=1;b<=c;b++){
//			printf("%d",b);
//		}
//	printf("\n");
//	}
//	return 0;
//}

#include<stdio.h>
int main(){
	int a,c,b=0;
	printf("Enter a number : ");
	scanf("%d",&c);
	while(c!=0){
		a = c%10;
		c = c/10;
		b = b*10+a;
	}
	printf("Reverse of the number is %d",b);
	return 0;
}

















