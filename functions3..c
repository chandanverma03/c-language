//#include<stdio.h>
//int a = 7;
//int main(){
//	num();
////	int a = 10;
//	printf("value = %d",a);
//	return 0;
//}
//int num(){
////	int a = 8;
//	printf("%d\n",a);
//	return 0;
//}





#include<stdio.h>
int main(){
	int a[8],i;
	for(i=0;i<8;i++){
		scanf("%d",&a[i]);
	}
	evenv(a);
}
void evenv(int b[]){
	int i;
	for(i=0;i<8;i++){
		i=b[i]%2;
	}
	for(i=0;i<8;i++){
		if (i%2==0){
		printf("%d",b[i]);
	}
}
}






