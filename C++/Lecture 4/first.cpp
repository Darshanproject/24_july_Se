#include<iostream>
using namespace std;
class Add{
	public:
		Add(){
			cout<<"This is con method \n";
		}
		~Add(){
			cout<<"This is dec method \n";
		}
		
};
int main(){
	Add obj;
	Add obj2;
}
