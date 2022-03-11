#include<iostream>
using namespace std;
class Table{
	private: int x;
	public:
		void Update(int a){
			a=a*5;
			cout<<"Number Updated: "<<a<<endl;
		}
		void Get(){
			int x;
			cout<<"Enter a number"<<endl;
			cin>>x;
			cout<<"you entered: "<<x<<endl;
			Update(x);
			cout<<"The updated number is: "<<a<<endl;
			
		}
};
int main(){
	Table T;
	T.Get();
	return 0;
}
