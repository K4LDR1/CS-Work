#include<iostream>

using namespace std;

int fact(int a){

	int fact_num=1;
	for(int	i=1;i<=a;i++){
		fact_num *= i;
	}	

	return fact_num;
	
}

int main() {

	int b;
	int factorial;
	cout<<"Enter a number: ";
	cin>>b;

	factorial = fact(b);
	cout<<"The factorial is: "<<factorial<<endl;

	return 0;
}

