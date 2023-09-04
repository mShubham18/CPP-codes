#include<iostream>
using namespace std;
int main(){

	int array[100],index,n,val;
	cout<<"NAME    - Sheetal Kumawat\n";
	cout<<"ENROLL	- 0832CS221186\n\n";
	cout<<"Enter the Number of elements in the Array : ";
	cin>>n;
	cout<<"Enter the Elements of array : \n";
	for(int i=1;i<=n;i++){
		cin>>array[i];
	}
	cout<<"Your Array is : ";
	for(int i=1;i<=n;i++){
		cout<<array[i]<<" ";
	}
	cout<<"\nEnter the Index on which you wish to add the value : ";
	cin>>index;
	cout<<"\nEnter the Value of the Index : ";
	cin>>val;
	for(int i=n;i>=index;i--){
		array[i+1]=array[i];
	}
	array[index] = val;
	for(int i=1;i<=n+1;i++){
		cout<<array[i]<<" ";
	}
}
