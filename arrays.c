//int a1[5] = {11,12,13,14,15}     printf all the values 
//#include<stdio.h>
//int main(){
//	int a1[5] = {1,2,3,4,5};
//	int i;
//    for(i=0; i<5; i++){
//		printf("%d\n",a1[i]);
//	}
//}

//write a c programm to get the value of array and the value of the array is 5
//#include<stdio.h>
//int main(){
//	int a1[5];
//	int i;
//	printf("Enter the value of array : ");
//	for(i=0;i<5;i++){
//		scanf("%d",&a1[i]);
//	}
//	for(i=0;i<5;i++){
//		printf("%d ",a1[i]);
//	}
//	
//}

//write a c program to print the total sum of the array
//#include<stdio.h>
//int main(){
//	int a1[5];
//	int i, sum =0;
//	printf("Enter the value of array : ");
//	for(i=0;i<5;i++){
//		scanf("%d",&a1[i]);
//	}
//	for(i=0;i<5;i++){
//		sum = sum + a1[i];
//		printf("%d ",a1[i]);
//		
//	}
//	printf("Sum of the values of the array is %d",sum);
//
//}

//consider an array a1 which consist of 5 elements get the input for the array 
//write a modify function to modify the value of array and modification of the array should be the
// multiple of 2 
//#include<stdio.h>
//int main(){
//	int a1[5],i;
//	for(i=0;i<5;i++){
//		scanf("%d",&a1[i]);
//	}
//	modify(a1);
//}
//void modify(int b[]){
//	int i;
//	for(i=0;i<5;i++){
//		b[i]=b[i]*2;
//	}
//	for(i=0;i<5;i++){
//		printf("%d  ",b[i]);
//	}
//}

//consider an array with no of elemnts as 8 get the input from the user for the array 
//define a function which displays only the even index values


//----- 




#include<stdio.h>
int main(){
	int a;
	printf("Enter the size of the array : ");
	scanf("%d",&a);
	int a1[a],i;
	for(i=0;i<a;i++){
		scanf("%d",&a1[i]);
	}
	for(i=0;i<a;i++){
		printf("%d  ",a1[i]);
	}
}





