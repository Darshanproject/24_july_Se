#include<iostream>
using namespace std;
class grandfather{
	public:
		void display(){
			cout<<"This is grand father's class \n";
		}
};
class father:public grandfather{
	public:
		void display1(){
			cout<<"This is fathers class \n";
		}
};
class child:public father{
	public:
		void display2(){
			cout<<"\nThis is child class";
		}
};

int main(){
	child obj;
	obj.display();
	obj.display1();
	obj.display2();
}
