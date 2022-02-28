#include<iostream>
using namespace std;
class rectangle{
	private:
		int length,width;
	public:
	void Get(){
		cout<<"Enter the length and width of the rectangle"<<endl;
		cin>>length>>width;
	}
	void Area(){
		cout<<"The area is: "<<(length*width)<<endl;
	}	
};
int main(){
	rectangle r;
	r.Get();
	r.Area();
	return 0;
}
