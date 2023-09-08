#include<iostream>
using namespace std;
class Person{  //class
	public:  //ass
		void sum(){   //member function
			cout<<"This is Person class";
		}
};

int main(){
	Person obj;  //creating object
	obj.sum();  //calling member function 
}
