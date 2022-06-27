#include<iostream>

using namespace std;

int main() {
	int numArray[10]={2,1,6,4,5,3,7,10,9,8};
	int l,s;
	l=s=numArray[0];

	for(int i=0;i<=9;i++){
		if(numArray[i]>l){
			l=numArray[i];
		}
		if(numArray[i]<s){
			s=numArray[i];
		}

	}
	cout<<"The smallest number is: "<<s<<endl;
	cout<<"The largest number is: "<<l<<endl;
	
	return 0;
}
