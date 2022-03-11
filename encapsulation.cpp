#include<iostream>
using namespace std;

class account{
	private: string username;
	private: string password;
	public: void Get(){
	
		cout<<"Enter the username: "<<endl;
		cin>>username;
		cout<<"Enter the password: "<<endl;
		cin>>password;
  
}
	cout<<password<<endl;
};
int main(){
	account A;
	A.Get();
	return 0;
	
}

