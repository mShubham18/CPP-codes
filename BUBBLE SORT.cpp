// Bubble Sorting Program by Shubham
#include<iostream>
using namespace std;
void bubble_sort(int sample_array[], int tot_elem){
	bool swapped;
	for(int i =0;i<tot_elem-1;i++){
		swapped = false;
		for(int j=0;j<tot_elem-i-1;j++){
			if(sample_array[j]>sample_array[j+1]){
				swap(sample_array[j],sample_array[j+1]);
				swapped = true;
			}
		}
		if(!swapped){
				break;
			}
	}
}
int main(){
	int N;
	cout<<"Name   - Shubham Mishra";
	cout<<endl;
	cout<<"Enroll - 0832CS221196";
	cout<<"\n\n";
	cout<<"Enter the number of elements you want in the array : ";
	cin>>N;
	cout<<endl;
	//entering the elements in the array
	int main_array[N];
	for(int i=0;i<N;i++){
		cout<<"Enter the "<<i+1<<" element of the array :";
		cin>>main_array[i];
	}
	//for printing the array
	cout<<endl;
	cout<<"The entered Array is : ";
	for(int i=0;i<N;i++){
		cout<<main_array[i]<<" ";
	}
	//calling the sorting function
	cout<<"\n\n";
	cout<<"The array after sorting is : ";
	bubble_sort(main_array,N);
	for(int i=0;i<N;i++){
		cout<<main_array[i]<<" ";
	}
}
