#include<iostream>
using namespace std;
int main(){
	int a[2][2],b[2][2],c[2][2];
	cout<<"Shubham Mishra : 0832CS221196 \n\n"<<endl;
	cout<<"Enter the elements of matrix 1 : \n";
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cin>>a[i][j];
		}
	}
	cout<<"Enter the elements of matrix 2 : \n";
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cin>>b[i][j];
		}
	}
	//For Addition " + "
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			c[i][j]=0;
			for(int k=0;k<2;k++){
				c[i][j]=a[i][j]+b[i][j];
			}
		}
	}
	cout<<"\n\nThe Sum of the matrices is : \n";
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<c[i][j]<<" ";
		}
		cout<<"\n";
	}
	//For Subtraction " - "
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			c[i][j]=0;
			for(int k=0;k<2;k++){
				c[i][j]=a[i][j]-b[i][j];
			}
		}
	}
	cout<<"\n\nThe Difference of the matrices is : \n";
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<c[i][j]<<" ";
		}
		cout<<"\n";
	}
	
}
	
