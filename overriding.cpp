#include<iostream>
using namespace std;
class Shape{
	public:void Area(int length, int width){
		cout<<"the area of the rectangle is: "<<length*width<<endl;
		
	}
};
class Triangle:public Shape{
	public:void Area(int length, int width, int height){
	
	cout<<"The area of a cuboid is : "<<2*(length*width+length*width*height)<<endl;

}
};
int main()
{
	int x,y,z;
	Shape s;
	Triangle t;
	cout<<"Enter the length,width and height: "<<endl;
	cin>>x;
	cin>>y;
	cin>>z;
	s.Area(x,y);
	t.Area(x,y,z);
	return 0;
}
