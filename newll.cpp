// LINKED LIST PROGRAM BY Shubham
#include<iostream>
#include<conio.h>
using namespace std;

struct new_node {
    int data;
    new_node *add;
};
// To add elements to the LINKED LIST
void push(new_node* &START) {
    cout << "\n\n";
    int ll_num_elem;
    START = NULL;
	new_node* last_node = NULL;
	
    new_node *PTR = START;
    cout << "\nEnter the Number of elements of Linked List : ";
    cin >> ll_num_elem;

    cout << "\nEnter the elements of linked list : \n";
    for (int i = 1; i <= ll_num_elem; i++) {
    if(START==NULL){
    	START = new new_node;
    	last_node = START;
	}
	else{
		last_node->add = new new_node;
		last_node = last_node->add;
	}
	cin>>last_node->data;
	if(last_node!=NULL){
		last_node->add = NULL;
	}
    }
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
// To delete a specific element from the list
void pop(new_node* &START) {
    if(START==NULL){
    	cout<<"\nLinked list is empty !\n";
	}
	int value_to_delete;
	cout<<"\nEnter the Value to be deleted : ";
	cin>>value_to_delete;
	if(START->data==value_to_delete){
		new_node* temp = START;
		START = START->add;
		delete temp;
		cout<<"Element "<<value_to_delete<<" Was deleted Successfully !";
		return;
	}
	new_node* current = START;
	while(current->add!=NULL && current->add->data!=value_to_delete){
		current = current->add;
	}
	if(current->add){
		new_node* temp = current->add;
		current->add = current->add->add;
		delete temp;	
		cout<<"\nThe Element "<<value_to_delete<<" is deleted successfully !\n";
	}
	else{
		cout<<"\nThe element was not found in the list !\n";
	}
	

}

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
    char user;
    new_node* START = NULL; // Initialize the linked list

    start:
    while (1) {
        cout << "\n\n\n";
        cout << "Press 1 to enter the element in the linked list \n";
        cout << "Press 2 to push an element to from the beginning\n";
        cout << "Press 3 to push an element to the end of the linked list\n";
        cout << "Press 4 to delete an element from the linked list \n";
        cout << "Press 5 to display the linked list \n\n";
        cout << "Enter your response : ";
        user = getch();

        switch (user) {
            case '1':
                push(START);
                break;
            case '2':
                push_beginning(START);
                break;
            case '3':
                push_from_end(START);
                break;
            case '4':
                pop(START);
                break;
            case '5':
            	display(START);
            	break;
                default:
                cout << "Wrong Input ! Please try again... \n";
                goto start;
        }
    }

    return 0;
}


