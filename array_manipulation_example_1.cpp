//Array Manipulation
#include <iostream>
#include <conio.h>
using namespace std;
void display (int[]);
void insert (int, int, int []);
void del (int, int[]);
void swap (int, int, int []);

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
					display(arr);
				} break;
			case 2:
				{
					cout << "Enter value and position: ";
					cin >> v >> p;
					insert(v,p,arr);
					display(arr);
				} break;
			case 3:
				{
					cout << "Enter position: ";
					cin >> p;
					del(p,arr);
					display(arr);
				} break;
			case 4:
				{
					cout << "Enter position 1 and position 2: ";
					cin >> p >> p2;
					swap(p,p2,arr);
					display(arr);
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

void display(int a[])
{
	for(int i=0; i<20; i++)
	{
		cout << "[" << i << "]" << a[i] << endl;
	}
}

void insert(int v, int p, int a[])
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
