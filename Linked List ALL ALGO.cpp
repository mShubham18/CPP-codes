// LINKED LIST PROGRAM BY Shubham
#include<iostream>
using namespace std;
struct new_node {
    int data;
    new_node *add;
};
// To add an element to the BEGINNING
void push_beginning(new_node* &START){
        int beg_val;
        cout<<"\nEnter the number to add to the beginning of the linked list\n";
        cin>>beg_val;
        new_node* PTR = new new_node;
        PTR->data = beg_val;
        PTR->add = START;
        START = PTR;
        cout<<"\nThe element has been added to the linked list successfully !\n";
}
//To add an element to the END
void push_from_end(new_node* &START){
	int end_val;
	cout<<"\n\nEnter the value of the element to be added to the end : ";
	cin>>end_val;
	new_node* new_elem = new new_node;
	new_elem->data = end_val;
	new_elem->add = NULL;
	//if list is empty new_elem become 1st node
	if(START==NULL){
	START = new_elem;
	}
	else{
	new_node* END = START;
	while(END->add!=NULL){
		END = END->add;
	}
	END->add = new_elem;
}
	cout<<"\nThe element has been added to the end of the Linked list\n";
	
}
void pop_beginning(new_node* &START){
	if(START==NULL){
		cout<<"The linked list is empty !"<<endl;
		return;
	}
	else{
	cout<<"The deleted element is : "<<START->data;
	new_node* temp = START;
	START = START->add;
	delete temp;
	}
}
//To delete from end
void pop_from_end(new_node* &START){
	if(START==NULL){
		cout<<"The Linked list is empty !"<<endl;
	}
		if(START->add==NULL){
			cout<<"The deleted element is : "<<START->data<<endl;
			delete START;
			START = NULL;
		}
			new_node* current = START;
			new_node* prev = NULL;
			while(current->add!=NULL){
				prev = current;
				current = current->add;
			}
			cout<<"\nThe deleted element is "<<current->data<<endl;
			delete current;
			if(prev!=NULL){
				prev->add = NULL;
			}
			else{
				START = NULL;
			}
}
//to add to a specific position
void push_specified(new_node* &START){
	int position,value;
	cout<<"\nEnter the number you wish to add : ";
	cin>>value;
	cout<<"\nEnter the position on which you want to enter the data : ";
	cin>>position;
	if(position<1){
		cout<<"\nPosition is invalid !... Enter a valid position";
	}
	new_node* new_element = new new_node;
	new_element->data = value;
	if(position==1 || START==NULL){
		new_element->add = START;
		START = new_element;
		cout<<"\n"<<value<<" was pushed at "<<position<<" position successfully !"<<endl;
	}
	int current_position = 1;
	new_node* current = START;
	while(current_position<position-1 && current->add!=NULL){
		current = current->add;
		current_position++;
	}
	new_element->add = current->add;
	current->add = new_element;
	cout<<"\n"<<value<<" was pushed at "<<position<<" position successfully !"<<endl;
}
//to delete from a specific position
void pop_from_specified(new_node* &START){
	int position;
	cout<<"\nEnter the position from which you want to delete the number : ";
	cin>>position;
	if(position<1){
		cout<<"\nPosition is invalid !... Enter a valid position.\n";
	}
	if(position==1){
		cout<<START->data<<" was deleted from "<<position<<" position of the linked list !"<<endl;;
		new_node* temp = START;
		START = START->add;
		delete temp;
	}
	int current_position = 1;
	new_node* current = START;
	new_node* prev = NULL;
	while(current_position<position && current!=NULL){
		prev = current;
		current = current->add;
		current_position++;
	}
	if(current==NULL){
		cout<<"\nPosition exceeds the length of the linked list.\n";
	}
	else{
		cout<<"\n"<<current->data<<" was deleted from "<<position<<" position of the linked list !"<<endl;
		prev->add=current->add;
		delete current;
	}
}
//to display
void display(new_node* START) {
    if (START == NULL) {
        cout << "\nLinked list is empty.\n" << endl;
        return;
    }
    cout << "\nThe formed linked list is : " << endl;
    new_node *PTR = START;
    while (PTR!=NULL) {
        cout<<PTR->data << " ";
        PTR = PTR->add;
    }
    cout << endl;
}

int main() {
	cout<<"NAME - Shubham Mishra\n";
	cout<<"ENROLL - 0832CS221196";
	cout<<"\n\n";
    int user;
    new_node* START = NULL; // Initialize the linked list
    do{
        cout << "\n\n\n";
        cout << "Press 1 to add an element from the beginning\n";
        cout << "Press 2 to add an element to the end of the linked list\n";
        cout << "Press 3 to delete an element from the beginning\n";
        cout << "Press 4 to delete an element from the end of the linked list \n";
        cout << "Press 5 to add an element to a specified position of the linked list \n";
        cout << "Press 6 to delete an element from a specified position of the linked list \n";
        cout << "Press 7 to display the linked list \n\n";
        cout << "Enter your response : ";
        cin>>user;

        switch (user) {
            case 1:
                push_beginning(START);
                break;
            case 2:
                push_from_end(START);
                break;
            case 3:
                pop_beginning(START);
                break;
            case 4:
                pop_from_end(START);
                break;
            case 5:
            	push_specified(START);
            	break;
            case 6:
            	pop_from_specified(START);
            	break;
            case 7:
            	display(START);
            	break;
            default:
                cout << "Wrong Input ! Please try again... \n";
        }
    }while(user!=0);

}
//Happy Coding! ~By Shubham.

