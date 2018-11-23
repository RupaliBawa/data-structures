#include<iostream.h>
#include<conio.h>
//implementation of stack
int Stack[5], top;

void push(int e) {
    if(top>=5) {
	cout<<"Stack is full."<<endl;
    }
    else {
	Stack[top]=e;
	top++;
	cout<<"Element inserted."<<endl;
    }
}

void pop() {
    if(top<=0) {
	cout<<"Stack is empty."<<endl;
    }
    else {
	top--;
	cout<<"Element deleted."<<endl;
    }
}

void print() {
    cout<<"\nHere's your Stack:"<<endl;
    for(int i=0; i<top; i++) {
	  cout<<Stack[i]<<" ";
    }
    cout<<"\n";
}

void main() {
    clrscr();
    top=0;
    push(1);
    push(2);
    push(3);
    push(4);
    print();

    pop();
    print();

    getch();
}
