#include<iostream>

using namespace std;

int fib(int n){
	if(n == 0 || n==1){
		return n;
	}
	else {
		return(fib(n-1) + fib(n-2));
	}
}

int main() {
	
	int n,i = 0;
	cout<<"Enter the desired number value: ";
	cin>>n;
	cout<<"Fibonacci Series:";
	while(i<n) {
		cout<<" "<<fib(i);
		i++;
	}
	cout<<endl;
	system("pause");
	return 0;
}
