//Program for Function Overloading by Shubham
#include <iostream>
using namespace std;
void add(int a, int b){
	cout<<"Sum of A and B is = "<<a+b<<endl;
}
void add(double a, double b){
	cout<<"Sum of A and B is = "<<a+b<<endl;
}
int main(){
	add(10,25);
	add(5.74,6.47);
	return 0;
}

