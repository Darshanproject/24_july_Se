#include<iostream>
using namespace std;
class parent{
	public:
		void dispaly(){
			cout<<"This is parent class \n";
		}
};

class child:public parent{
	public:
		void display2(){
			cout<<"This is child class";
		}
};

int main(){
	child obj;
	obj.dispaly();
	obj.display2();
}
