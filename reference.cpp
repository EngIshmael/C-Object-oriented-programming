#include<iostream>
using namespace std;
void Add(int x[])
{
	int sum,i;
	sum=0;
	for(i=0; i<=5; i++){
		sum=sum+x[i];
	}
	cout<<"The sum is "<<sum<<endl;
}
int main(){
	int p[6],j;
	for(j=0; j<=8; j++){
		cout<<"Enter an array value at: "<<j<<endl;
		cin>>p[j];
	}
	Add(p);
return 0;
}
