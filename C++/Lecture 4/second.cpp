#include<iostream>
using namespace std;
class A{
	public:
		void run(int a,int b){
			cout<<"This is your addtion of two numbers : "<<a+b<<endl;
		}
		void run(double a,double b){
			cout<<"This is your addtion of two numbers double  : "<<a+b<<endl;
		}
		
};
main(){
	A obj;
	obj.run(22.5,2.3);
	obj.run(13,5);
}
