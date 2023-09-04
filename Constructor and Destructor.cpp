#include<iostream>
using namespace std;
class MyClass{
	public:
    MyClass(){
        cout<<"Constructor created"<<endl;
    
    }
    ~MyClass(){
    	cout<<"Destructor Destroyed"<<endl;
	}
    
};
int main(){
	MyClass obj;
}
