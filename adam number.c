//write a user  define function to check the number is adam or not call by value method
//adam: a = 12,
//a^2 = 144 then reverse the input
//then reverse the input rev_a = 21
//rev_a^2 = 441
//rev_rev_a^2 = 144

#include<stdio.h>
int rev(int n){
	int d, r = 0;
	while(n!=0){
		d = n%10;
		n = n/10;
		r = r*10+d;
	}
	return r;
}
int sq(int n1){
	return n1*n1;
}
int main(){
	int a,asq,reva,revasq,revasq2;
	printf("Enter a number : ");
	scanf("%d",&a);
	asq = sq(a);
	reva = rev(a);
	revasq = sq(reva);
	revasq2 = rev(revasq);
	if (revasq2 == asq){
		printf("%d is adam number ",a);
	}
	else {
		printf("%d is not an adam number ",a);
	}
