#include <stdio.h> 
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

void firstscreen(){
	system("color 8A");
    cout << "\n+++++++++++++++++++++++++++++++++++++++++++++++++++\n"  
    	 << "+++++++++++ MONSALUD, Robert Russell N. +++++++++++\n"
    	 << "+++++++++++ Section: E21 ++++++++++++++++++++++++++\n"
    	 << "+++++++++++ Linked List +++++++++++++++++++++++++++\n"
    	 << "+++++++++++++++++++++++++++++++++++++++++++++++++++\n"
    	 << endl; system("pause"); system("cls");
}

void loading(){
	system("color 0A");
 	cout<<"\n\n\n\t\t\t\tPlease wait while loading\n\n";
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
struct node{
	int data;
	struct node * next;
} *head;
  
int count(){
  struct node * n;
  int c = 0;
  n = head;
  while (n != NULL){
    n = n -> next;
    c++;
  }
  return c;
}

void search(int num){
  struct node * n;
  int c = 0;
  n = head;
  while (n != NULL){
  	if(n->data==num){
    cout << "Location: " << c;
	} 
    n = n -> next;
    c++;
  }
}

void append(int num){
  struct node * temp, * right;
  temp = (struct node * ) malloc(sizeof(struct node));
  temp -> data = num;
  right = (struct node * ) head;
  while (right -> next != NULL)
  right = right -> next;
  right -> next = temp;
  right = temp;
  right -> next = NULL;
}

void add(int num){
  struct node * temp;
  temp = (struct node * ) malloc(sizeof(struct node));
  temp -> data = num;
  if (head == NULL){
    head = temp;
    head -> next = NULL;
  } 
  else{
    temp -> next = head;
    head = temp;
  }
}

void addafter(int num, int loc){
  int i;
  struct node * temp, * left, * right;
  right = head;
  for (i = 1; i <= loc; i++){
    left = right;
    right = right -> next; 
  }
  temp = (struct node * ) malloc(sizeof(struct node));
  temp -> data = num;
  left -> next = temp;
  left = temp;
  left -> next = right;
  return;
}

int delete_val(int num){
  struct node * temp, * prev;
  temp = head;
  while (temp != NULL){
    if (temp -> data == num){
      if (temp == head){
        head = temp -> next;
        //free(temp);
        return 1;
      } 
      else{
        prev -> next = temp -> next;
        free(temp);
        return 1;
      }
    } 
	else{
      prev = temp;
      temp = temp -> next;
    }
  }
  return 0;
}

void delete_all(int num){
  struct node * n;
  int c = 0;
  n = head;
  while (n != NULL){
    delete_val(num); 
    n = n -> next;
    c++;
  }
}

void insert(int num){
  struct node * temp;
  temp = head;
  if (temp == NULL){
    add(num);
  } 
  else{
    while (temp != NULL){
    temp = temp -> next;
    }  
    append(num);
  }
}


void display(struct node * r) {
  r = head;
  if (r == NULL){
    return;
  }
  while (r != NULL) {
    printf("%d ", r -> data);
    r = r -> next;
  }
  cout << endl;
}

int main(){
  firstscreen();	
  loading();
  int i, num, loc;
  struct node * n;
  head = NULL;
  while (1){
  	system("cls");
    cout << "Linked List Operations: \n";
    cout << "======================\n";
    cout << "1. Insert\n";
    cout << "2. Add After\n";
    cout << "3. Display\n";
    cout << "4. Size\n";
    cout << "5. Delete\n";
    cout << "6. Delete All\n";
    cout << "7. Search\n";
    cout << "8. Exit\n";
    cout << "======================\n";
    cout << "Enter your option: ";
    cin >> i;
    
    if(i <= 0){
      cout << "Enter only an Integer\n";
      exit(0);
    } 
	else{
      switch(i){	
      case 1:
        cout << "Enter the number to insert: ";
        cin >> num;
        insert(num);
        break;
        
      case 2:
      	cout << "Enter Value: ";
      	cin >> num;
      	cout << "Enter Location: ";
      	cin >> loc;
      	addafter(num,loc);
        
      case 3:
        if (head == NULL){
          cout << "List is Empty\n";
        } 
		else{
          cout << "Element(s) in the list are: ";
        }
        display(n);
        break;
        
      case 4:
        cout << "Size of the list is " << count() <<endl;
        break;
        
      case 5:
        if(head == NULL)
          cout << "List is Empty\n";
        else{
          cout << "Enter the number to delete: ";
          cin >> num;
          if (delete_val(num))
            cout << num << " deleted successfully\n";
          else
            cout << num << " not found in the list\n";
        }
        break;
        
      case 6:
        cout << "Enter number to delete: ";
        cin >> num;
        delete_all(num);
        cout << "All " << num << " has been deleted succesfully";
        break;
        
      case 7:
      	  cout << "Enter number to find position: ";
      	  cin >> num;
      	  search(num);
      	  break;
	  	  
      case 8:
        return 0; break;
      default:
        cout<<"Invalid Option!\n";
      }
    }
	getch();    
  }
  return 0;
}
