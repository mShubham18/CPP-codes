#include<iostream>
using namespace std;
class emp{
	protected:
		string fname,lname,emp_id;
	public:
	void get(){
		cout<<"\nEnter first name      : ";
		cin>>fname;
		cout<<"\nEnter last name       : ";
		cin>>lname;
		cout<<"\nEnter the Employee ID : ";
		cin>>emp_id;
	}
};
class Salary:public emp{
		protected:
		int Base_Salary,Net_Salary,I_Tax,Insurance,PF;

		public:
		void get1(){
			cout<<"\nEnter the basic salary : ";
			cin>>Base_Salary;
		}
		void calculate(){
			I_Tax = Base_Salary*0.1;
			Insurance = Base_Salary*0.03;
			PF = Base_Salary*0.12;
			Net_Salary = Base_Salary - (I_Tax+Insurance+PF);
		}
		void display(){
			cout<<"\nEmployee Name : "<<fname<<" "<<lname<<endl;
			cout<<"\nEmployee ID   : "<<emp_id<<endl;
			cout<<"\nNet Salary    : "<<"Rs. "<<Net_Salary<<endl;
		}
};
int main(){
	cout<<"Name   -> Shubham Mishra";
	cout<<endl;
	cout<<"Enroll -> 0832CS221196";
	cout<<"\n\n";
	int emp_num;
	cout<<"Enter the number of Employees : ";
	cin>>emp_num;
	Salary employees[emp_num];
	for(int i=0;i<emp_num;i++){
		cout<<"\nEnter the Details of Employee "<<i+1<<" : "<<endl;
		employees[i].get();
		employees[i].get1();
		employees[i].calculate();
	}
	cout<<"\nDetails of the employees : \n\n";
	for(int i=0;i<emp_num;i++){
		employees[i].display();
	}
	
}
