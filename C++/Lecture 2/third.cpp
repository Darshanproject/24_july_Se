#include<iostream>
using namespace std;
class father{
	public:
		void sum(){
			cout<<"\nThis is fathers class \n";
		}
};
class child:public father{
	public:
		void add(){
			cout<<"This is child class ";
		}
};


int main(){
	child obj;
	obj.add();
	obj.sum();
}
