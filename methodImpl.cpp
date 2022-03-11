#include<iostream>
using namespace std;
int Add(int a, int b){
	return a +b;
}
int main(){
	int x,y;
	cout<<"Enter the first Number: "<<endl;
	cin>>x;
	cout<<"Enter the second Number: "<<endl;
	cin>>y;
	cout<<"the sum is: "<<Add(x,y)<<endl;
	return 0;
}

