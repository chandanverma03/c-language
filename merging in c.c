#include<stdio.h>
int main(){
	int i,j,n,m;
	int a[i],b[j];
	printf("Enter the size of first array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\n");
	printf("Enter the size of second array : ");
	scanf("%d ",&m);
	for(j=0;j<m;j++){
		scanf("%d ",&b[j]);
	}
	printf("\n");
	printf("Elements after merging are : ");
	for(i=0;i<m;i++){
		a[n+i]=b[i];
	}
	for(i=0;i<(n+m);i++){
		printf("%d ",a[i]);
	}
	return 0;
}



//merging of 3 array              (incomplete)
#include<stdio.h>
int main(){
	int i,j,l,n,m,k;
	int a[i],b[j],c[k];
	printf("Enter the size of first array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\n");
	printf("Enter the size of second array : ");
	scanf("%d ",&m);
	for(j=0;j<m;j++){
		scanf("%d ",&b[j]);
	}
	printf("\n");
	printf("Enter the size of third array : ");
	scanf("%d",&k);
	for(l=0;l<k;l++){
		scanf("%d",&c[l]);
	}
	printf("\n");
	printf("Elements after merging are : ");
	for(i=0;i<k;i++){
		a[n+i]=b[i];
	}
	for(i=0;i<(n+m+k);i++){
		printf("%d ",a[i]);
	}
	return 0;
}
