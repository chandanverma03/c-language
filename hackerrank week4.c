#include<stdio.h>
int is_prime(int n){
    if (n<=1){
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int is_palindrome(int n){
    int rev = 0,num = n;
    while(num!=0){
        rev = rev*10+num%10;
        num /= 10;
    }
    return n == rev;
}
int main(){
    int n;
    scanf("%d",&n);
    if(!is_palindrome(n)){
        printf("NO\n");
    }
    else{
        if(is_prime(n)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
