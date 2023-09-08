#include<iostream>
using namespace std;
class A{
	public:
	void sum(int a,int b){
		cout<<"This is your sum of two numbers :"<<a+b;
	}
};

class b:public A{
	public:
		void mul(int a,int b){
			cout<<"This is your mul of two numbers :"<<a*b;
		}
};


class c:public A{
	public:
		void div(int a,int b){
			cout<<"This is your divi of two numbers :"<<a/b;
		}
};
class d:public A{
	public:
		void sub(int a,int b){
			cout<<"This is your sub of two numbers :"<<a-b;
		}
};
int main(){
	b obj;
	obj.sum(2,2);
	obj.mul(8,8);
	cout<<"\n----------------------------------------\n";
	c obj2;
	obj2.sum(3,3);
	obj2.div(2,10);
	cout<<"\n----------------------------------------\n";
	d obj3;
	obj3.sub(5,2);
	obj3.sum(4,4);
	return 0;
}

