#include<iostream>
using namespace std;
int Fact(int x){
	if(x==0){
		return 1;
	}
	else{
		return x*Fact(x-1);
	}
}
int main(){
	int a;
	cout<<"Enter the number to calculate"<<endl;
	cin>>a;
	cout<<a<<"!= "<<Fact(a)<<endl;
return 0;	
}
