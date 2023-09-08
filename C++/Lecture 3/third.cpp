#include<iostream>
using namespace std;
class a{
 
		void display(){
			cout<<"This is a class";
		}
};
class b{
	public:
		void display2(){
			cout<<"This is b class";
		}
};

class c:public a,public b{
	
};

int main(){
	c obj;
	obj.display();
	obj.display2();
}
