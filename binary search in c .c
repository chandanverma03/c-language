//Program of binary search in an array          (goes with sorted array)

#include<stdio.h>
int main(){
	int loc = -1, key, beg = 0, last = 9, mid;
	int a[10] = {2,4,6,8,10,12,37,45,68,89};
	printf("Enter the integer value to search in an array ");
	scanf("%d",&key);
	while(beg<=last){
		mid = (beg+last)/2;
		if(a[mid]==key){
			loc = mid;
			break;
		}
		else if (a[mid]>key){
			last = mid-1;
		}
		else if (a[mid]<key){
			beg = mid+1;
		}
	}
	if (loc!=-1){
		printf("Element found at %d ",loc+1);
	}
	else{
		printf("Element not found ");
	}
	getch();
}
