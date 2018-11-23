#include<iostream.h>
#include<conio.h>
//implementation of queue using array
int a[5], start, end;
void menu();
void enque() {
		int e;
		if(end>=5) {
			cout<<"Queue is full.";
		}
		else {
			cout<<"Enter the element:";
			cin>>e;
			a[end]=e;
			end++;
			cout<<"ELement inserted."<<endl;
		}
		menu();
}

void deque() {
		if(start==end) {
			cout<<"Queue is empty."<<endl;
		}
		else {
			start++;
			cout<<"ELement deleted."<<endl;
		}
		menu();
}

void display() {
		cout<<"Queue:"<<endl;
		for(int i=start; i<end; i++) {
				cout<<a[i]<<" ";
		}
		menu();
}

void exit() {
		cout<<"Signing out... Press any key";
}

void menu() {
		int n;
		cout<<"\nChoose an option:\nEnter 1, to display queue\nEnter 2, to enque\nEnter 3, to deque\nEnter 4, to exit"<<endl;
		cin>>n;
		switch(n) {
			case 1: display();
				break;
			case 2: enque();
				break;
			case 3: deque();
				break;
			case 4: exit();
				break;
			default: cout<<"Invalid option."<<endl;
				exit();
				break;
		}
}

void main() {
		clrscr();
		start=NULL;
		end=NULL;
		menu();
		getch();
}
