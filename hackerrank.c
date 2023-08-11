//#include<stdio.h>
//int main(){
//	int a,b;
//	float c,d;
//	scanf("%d %d",&a,&b);
//	scanf("%f %f",&c,&d);
//	printf("%d %d\n",a+b,a-b);
//	printf("%.1f %.1f",c+d,c-d);
//	return 0;
//}


//#include<stdio.h>
//int main(){
//	int a,b;
//	scanf("%d %d",&a,&b);
//	a>b?printf("%d",a):printf("%d",b);
//	return 0;
//}
#include<stdio.h>
int main() {
    int a, b, c, d,ans;
    scanf("%d\n %d\n %d\n %d\n", &a, &b, &c, &d);
    ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
