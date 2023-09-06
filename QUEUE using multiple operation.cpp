//Queue Program by Shubham.

#include<iostream>
using namespace std;
#define N 5
int queue[N];
int front =-1;
int rear = -1;
void push_from_front(){
    if(rear>=N-1){
        cout<<"\nThe QUEUE is full!";
    }
    else{
    	if(front==-1){
    		front=0;
		}
		rear++;
		int push_elem;
		cout<<"\nEnter the no. to be pushed : ";
		cin>>push_elem;
        for(int i=rear;i>=front;i--){
            queue[i+1] = queue[i];
        }
        queue[front]=push_elem;
    }
}
void pop_from_rear(){
	if(front==-1){
		cout<<"\nThe queue is empty";
	}
	else{
		if(front==rear){
			front=rear=-1;
		}
		cout<<"\nThe deleted element is : "<<queue[rear];
		rear--;
	}
}
void display(){
	if(front==-1){
		cout<<"\nQUEUE is empty !";
	}
	cout<<endl;
	cout<<"\nThe QUEUE is : ";
	for(int i=front;i<=rear;i++){  // rear because we have to print upto rear elements
		cout<<queue[i]<<" ";
	}
	cout<<endl;
}
int main(){
    int choice;
    cout<<"\n*** Welcome to the Queue Implementation program ! ****\n\n";
    do{
		cout<<"\nPress 1 for pushing an element from front\n";
    	cout<<"\nPress 2 for pulling an element from rear\n";
    	cout<<"\nPress 3 to display all the elements of the array\n";
    	cout<<"\nPress 0 for Exiting the program\n";
    	cout<<"\nPlease enter your choice : ";
    	cin>>choice;
    	switch(choice){
    		case 1:
    			push_from_front();
    			break;
    		case 2:
    			pop_from_rear();
    			break;
    		case 3:
    			display();
    			break;
    		case 0:
    			cout<<"\nExited successfully !";
    			break;
    		default:
    			cout<<"\nInvalid choice...Please try again !\n";
    			break;
    			
		}
	}while(choice!=0);
}
