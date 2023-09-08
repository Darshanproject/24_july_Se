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

class child2:public child{
	
};

int main(){
	child2 obj;
	obj.dispaly();
	obj.display2();
}
