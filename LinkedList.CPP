#include<iostream.h>
#include<conio.h>

struct node {
  int data;
  node* ptr;
};

node* start;

void insert_front(int e) {
    node* nnode=new node();
    nnode->data=e;
    nnode->ptr=start;
    start=nnode;
}

void insert_end(int e) {
    node* nnode=new node();
    nnode->data=e;
    nnode->ptr=NULL;     //because this is the last node
    node* itr=start;
    while(1) {
	     if(itr->ptr==NULL) {
	        break;
	       }
	     else {
	        itr=itr->ptr;
	       }
    }
    itr->ptr=nnode;
}

void insert_middle(int e, int pos) {       //pos refers to the node after which the new node is to be inserted
    node* nnode=new node();
    nnode->data=e;
    node* itr=start;  //itr is node pointer for iteration
    int i=0;
    while(1) {
	     if(i==pos) {
	        break;
	       }
	     else {
	        itr=itr->ptr;
	        i++;
	       }
    }
    nnode->ptr=itr->ptr;    //so our new node points to the next node in the link
    itr->ptr=nnode;
}

void delete_front() {
    start=start->ptr;
    cout<<"Node deleted"<<endl;
}

void delete_middle(int pos) {
    node* itr;
    int i=1;
    while(1) {
	     if(i==pos) {
	        break;
	       }
	     else if(i==1) {
	        itr=start;
	        i++;
	       }
	     else {
	        itr=itr->ptr;
	        i++;
	       }
    }
    itr->ptr = (itr->ptr)->ptr;
}

void delete_end() {
    node* itr=start;
    while(1) {
	     if((itr->ptr) -> ptr == NULL) {   //to stop at the second to last node
	        break;
	       }
	     else {
	        itr = itr->ptr;
	       }
    }
    itr->ptr = NULL;
}

void display() {
    node* p=start;
    cout<<"Here's your linked list: \n";
    while(1) {
	     cout<<p->data<<endl;
	     if(p->ptr==NULL) {
	         break;
	       }
	     else {
		       p=p->ptr;
	        }
    }
}

void main() {
    clrscr();
    start=NULL;

    insert_front(2);
    insert_front(4);
    insert_front(7);
    insert_front(9);
    insert_end(10);
    insert_middle(14,2);
    display();

    delete_front();
    delete_middle(2);
    delete_end();
    display();
    getch();
}
