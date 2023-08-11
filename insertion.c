//#include<stdio.h>
//int main(){
//	int n,a[n],i,j,temp;
//	printf("Enter the size of array : ");
//	scanf("%d",&n);
//	printf("enter the elements of array : ");
//	scanf("%d",&a[n]);
//	for(i=1;i<n;i++){
//		temp=a[i];
//		j=i-1;
//		while(j>=0 && a[j]>temp){
//			a[j+1]=a[j];
//			j--;
//		}
//		a[j+1]=temp;
//	}
//	printf("Sorting array is : ");
//	for(i=1;i<n;i++){
//		printf("%d",&a[i]);
//	}	
//}


insertion before a given position 
insertion after a given position
#include<stdio.h>
int main(){
	int a,i,b,pos;
	int n[a];
	printf("Enter the size of array : ");
	scanf("%d",&a);
	printf("Enter the elements of array : ");
	for(i=0;i<a;i++){
		scanf("%d",&n[i]);
	}
	printf("Enter the position you want to insert the element : ");
	scanf("%d",&pos);
	printf("Enter the element you want to enter : ");
	scanf("%d",&b);
	for(i=a-1;i>=pos-1;i--){
		n[i+1]=a[i];
		a[pos-1]=b;
		a++;
	}
	
}

