#include<iostream>
using namespace std;
class a{
	public:
		void dispaly(){
			cout<<"This is A class";
		}
};
class b:public a{
	public:
		void dispaly1(){
			cout<<"This is b class";
		}
};
class c{
	public:
		void dispaly3(){
			cout<<"This is c class";
		}
};
class D:public b,public c{
	public:
		void dispaly4(){
			cout<<"This is D class";
		}
};

int main(){
	D obj;
	obj.dispaly();
	obj.dispaly1();
	obj.dispaly3();
	obj.dispaly4();
}
