//write a c program to perform addition of two 1-dimentional array and store the added value in the 
//new array

/*#include<stdio.h>
int main(){
	int size;
	printf("Enter the size of the array : ");
	scanf("%d", &size);
	printf("\n");
	int a[size],b[size],c[size],i;
	printf("Enter the elements for array A : ");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	printf("\n");
	printf("Enter the elements for array B : ");
	for(i=0;i<size;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<size;i++){           //adding the values of the array 
		c[i]=a[i]+b[i];
	}
	printf("\n");
	for(i=0;i<size;i++){          //printing the added values in the array    
		printf("%d  ",c[i]);
	}	
} */

//write a c program to perfrom insertion in a 1 D array
/*#include<stdio.h>
int main(){
	int array[100],position,c,n,value;
	printf("Enter number of elements in array : ");
	scanf("%d",&n);
	printf("Enter the %d elements : ",n);
	for(c=0;c<n;c++){
		scanf("%d",&array[c]);
	}
	printf("Enter the insertion value where you want to enter : ");
	scanf("%d",&value);
	for(c=n-1;c>=position-1;c--){
	array[c+1]=array[c];
}
	for(c=0;c<n;c++){
	printf("%d",array[c]);
}
	
}*/      //incorrect

//---------------------------------------------------------------

//deletion in 1 D array 
#include<stdio.h>
#include<conio.h>
int main(){
	int a[100],i,n,position;
	printf("Enter the size : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the position to be deleted : ");
	scanf("%d",&position);
	for(i=position-1;i<n;i++){
		a[i]=a[i+1];
	}
	for(i=0;i<n-1;i++){
		printf("%d  ",a[i]);
	}
}


