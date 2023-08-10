//matrices
/*#include<stdio.h>
int main(){
	int a[3][3],i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("a[%d][%d] ",i,j);
			scanf("%d",&a[i][j]);
		}	
	}
		printf("\n");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
}*/

//perform addition of 2D matrices and store the answers in the new matrices 
/*#include<stdio.h>
int main(){
	int a[3][3],b[3][3],c[3][3],i,j;
	printf("Enter the elements for 2D array A : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
				printf("a[%d][%d] ",i,j);
				scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		printf("Enter the elements for 2D array B : \n");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("b[%d][%d] ",i,j);
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("%d",b[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				c[i][j] = a[i][j]+ b[i][j];
			}
		}
		printf("Resultant matrices : \n");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("%d",c[i][j]);
				
			}
			printf("\n");
		}
	
} */

//write a c program to print the diagnal element of the matrices 
/*#include<stdio.h>
int main(){
	int a[3][3],i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("a[%d][%d] ",i,j);
			scanf("%d",&a[i][j]);
		}	
	}
		printf("\n");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				if(i==j){              //for printing the diagnal elements of the matrices
				printf("%d ",a[i][j]);
			}
		}
			printf("\n");
	}
} */

//for opposite diagnal 
#include<stdio.h>
int main(){
	int a[3][3],i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("a[%d][%d] ",i,j);
			scanf("%d",&a[i][j]);
		}	
	}
		printf("\n");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
//		for(i=0;i<3;i++){
//			for(j=0;j<3;j++){
//				if((i+j)==(3-1)){           //for opposite diagnal condition will be i+j = n-1
//				printf("%d ",a[i][j]);
//			}
//		}
//			printf("\n");
//	}
}

