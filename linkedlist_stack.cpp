//Midterm Practical Exam in CPEDSTRUCL
//Robert Russell N. Monsalud E21
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <windows.h>
using namespace std;
struct node{
	int data;
	node *next;
}*top;
void display();
void push(int);
void firstscreen();
void loading();

int main(){
	firstscreen();
	loading();
	do{
		system("cls");
		int choice;
		cout << "Linked list implementation of Stack\n" << endl;
		cout << "[1]-Push\n";
		cout << "[2]-Traverse\n";
		cout << "[3]-Exit\n" << endl;
		cout << "Enter choice: ";
		cin >> choice;
		
		switch(choice){
			case 1:{
					int num;
					cout << "Enter n: ";
					cin >> num;
					push(num);
				} break;	
			case 2:{
					display();
				} break;
			case 3:{
					exit(1);
				} break;
			default: cout << "Invalid Choice!"; break;
		} getch();
	} while(1);
	getch();
	return 0;
}

void push(int num){
	node *p=new node;
	p->data=num;
	if(top==NULL){
		p->next=NULL;
	}
	else{
		p->next=top;
	}
	top=p;
}

void display(){
	node *p;
	if (top==NULL){
		cout << "Empty";
	}
	else{
		cout << "STACK\n";
		cout << setw(10) << "POINTER "
			 << setw(10) << "VALUE"
			 << setw(10) << "NEXT"
			 << endl;
	}
	p=top;
	while(p!=NULL){
		cout << setw(10) << p
			 << setw(10) << p->data
			 << setw(10) << p->next
			 << endl;
			 p=p->next;
	}
}

void firstscreen(){
	system("color 8A");
    cout << "\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n"  
    	 << "+++++++++++++++++++++++++++ MONSALUD, Robert Russell N. +++++++++++++++++++++++++++++++++++\n"
    	 << "+++++++++++++++++++++++++++ Section: E21 ++++++++++++++++++++++++++++++++++++++++++++++++++\n"
    	 << "+++++++++++++++++++++++++++ Prof. Edwin Richbald A. Salinas +++++++++++++++++++++++++++++++\n"
    	 << "+++++++++++++++++++++++++++ Linked List Implementation of Stack +++++++++++++++++++++++++++\n"
    	 << "+++++++++++++++++++++++++++ Midterm Practical Exam in CPEDSTRUCL ++++++++++++++++++++++++++\n"
		 << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n"
    	 << endl; system("pause"); system("cls");
}

void loading(){
	system("color 0A");
 	cout<<"\n\n\n\t\t\t\tHere comes the program!\n\n";
 	char a=177, b=219;
    cout<<"\t\t\t\t";
 	for (int i=0;i<=15;i++)
 	cout<<a;
 	cout<<"\r";
 	cout<<"\t\t\t\t";
 	for (int i=0;i<=15;i++)
 	{
  		cout<<b;
  		Sleep(100);
 	}
 	system("color 8A");
    	system("cls"); 
}
