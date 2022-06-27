#include<iostream>

using namespace std;

void gcd(int a,int b){
	int s,l;
	int val;

	s = a>b? b:a;
	l = a>b? a:b;
	for(int i = 1;i<=s;i++){
		if(s%i == 0 & l%i == 0)
		{
			val = i;
		}
		else{
			continue;
		}
	}
	cout<<"The GCD is: "<<val<<endl;
}

int main(){
	
	int a,b;
	cout<<"Enter two digits:";
	cin>>a>>b;

	gcd(a,b);

	return 0;
}


