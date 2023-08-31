//#include <iostream>
//using namespace std;
//void swapByValue(int a, int b) {
//    int temp = a;
//    a = b;
//    b = temp;
//    cout << "After swapping: num1 = " << a << ", num2 = " << b << endl;
//
//}
//
//int main() {
//    int num1, num2;
//
//    cout << "Enter two numbers: ";
//    cin >> num1 >> num2;
//
//    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
//
//    swapByValue(num1, num2);
//    return 0;
//}


//#include<iostream>
//using namespace std;
//int main(int&,int&){
//	int a,b;
//	cout<<"Enter value for a : ";
//	cin>>a;
//	cout<<"Enter value of b : ";
//	cin>>b;
//	swap(a,b);
//	cout<<"Value of a and b after swapping is "<<a<<" "<<b;
//}
//void swap(int* a, int* b){
//	int t;
//	t = *a;
//	*a = *b;
//	*b = t;
//}


#include<iostream>
using namespace std;
void f(int *p, int*q){
	p = q;
	*p = 2;
}
int i = 1, j=1;
int main(){
	f(&i,&j);
		cout<<i<<endl<<j;
		return 0;
}
