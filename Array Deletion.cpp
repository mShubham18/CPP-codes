#include<iostream>
using namespace std;
int main(){
	
	int array[100],n,val,index;
	cout<<"Shubham Mishra : 0832CS221196 \n\n"<<endl;
	cout<<"Enter the no. of elements in array : ";
	cin>>n;
	cout<<"Enter the elements of the array : \n";
	for(int i=1;i<=n;i++){
		cin>>array[i];
	}
	cout<<"Your Entered array is : ";
	for(int i=1;i<=n;i++){
		cout<<array[i]<<" ";
	}
	cout<<"\nEnter the index you want to delete element of : ";
	cin>>index;
	for(int i=index;i<n;i++){
		array[i]=array[i+1];
	}
	for(int i=1;i<=n-1;i++){
		cout<<array[i]<<" ";
	}
}
