#include<iostream>
using namespace std;
class Add{
	public:
		Add(int a,int b){
			cout<<"This is your sum of two numbers : "<<a+b;
		}
};

int main(){
	int c,d;
	cout<<"Enter the values here:";
	cin>>c;
	cout<<"Enter the values here:";
	cin>>d;	
	Add obj (c,d);
}
