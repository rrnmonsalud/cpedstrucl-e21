#include <iostream>
#include <conio.h>
using namespace std;
void display (struct Book[]);
void insert (int, int, struct Book[]);
void del (int, int[]);
void swap (int, int, int []);
struct Book {
  	int copies;
  	double price;
}book[5];
	
int main()
{
	int arr[20]={1,2,3,4,5,6,7,8,9,10};
	while(1)
	{
		system ("cls");
		int choice, v, p, p2;
		cout << "Array Manipulation\n";
		cout << "[1] Display \n";
		cout << "[2] Insert \n";
		cout << "[3] Delete \n";
		cout << "[4] SWAP \n";
		cout << "[5] Exit \n";
		cout << "Enter choice: ";
		cin >> choice;
		switch(choice)
		{
			case 1:
				{
					display(book);
				} break;
			case 2:
				{
					cout << "Enter value and position: ";
					cin >> v >> p;
					insert(v,p,arr);
					display(book);
				} break;
			case 3:
				{
					cout << "Enter position: ";
					cin >> p;
					del(p,arr);
					display(book);
				} break;
			case 4:
				{
					cout << "Enter position 1 and position 2: ";
					cin >> p >> p2;
					swap(p,p2,arr);
					display(book);
				} break;
			case 5:
				{
					exit(1);
				} break;
			
			default: cout << "Invalid Choice!\n"; break;					
		}
		cout << endl;
		system("pause");
	}
	getch();
	return 0;
}

void display(struct Book book[])
{
	for(int i=0; i<5; i++)
	{
		cout << "[" << i << "]" << book[i].copies << endl;
	}
}

void insert(int v, int p, struct Book book[])
{
	int i;
	int x[20]={};
	for(i=p; i<20; i++)
	{
		x[i-p]=a[i];
	}
	
	a[p]=v;
	for (i=p; i<=20; i++)
	{
		a[i+1]=x[i-p];
	}
}

void del(int p, int a[])
{
	int i;
	for (i=p; i<20; i++)
	{
		a[i]=a[i+1];
	}
	a[20-1]=0;
}

void swap (int p, int p2, int a[])
{
	int temp;
	temp=a[p];
	a[p]=a[p2];
	a[p2]=temp;
}
