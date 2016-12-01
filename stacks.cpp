//Monsalud
#include <iostream>
using namespace std;
class Stack {
  public:
    Stack(int num) {
      top = 0;
      maxelem = num;
      s = new int[maxelem];
    }

  void push(int t) {
    cout << "Push " << t << ": \n";
    if (top == maxelem)
      return;
    s[top++] = t;
  }

  void menu() {
    cout << "\nWhat would you like to do? \n";
    cout << "1: Push \n";
    cout << "2: Pop \n";
    cout << "3: Display \n";
    cout << "4: Exit \n\n";
  }

  int pop() {
    cout << "Pop: \n";
    if (top == 0)
      return -1;
    return s[--top];
  }

  void display() {
    if (top == 0) {
      cout << "(empty)\n";
      return;
    }
    for (int t = 0; t < top; t++)
      cout << s[t] << " ";
    cout << "\n";
  }

  int empty() {
    return top == 0;
  }

  private:
    int * s;
  int top;
  int maxelem;
};

int main() {
  int x, c;
  Stack * s = new Stack(100);
  while (1) {
    s -> menu();
    cout << "Enter your choice: ";
    cin >> x;
    switch (x) {
    case 1:
      {
        cout << "Enter number: ";
        cin >> c;
        s -> push(c);
      }
      break;
    case 2:
      {
        s -> pop();
      }
      break;
    case 3:
      {
        s -> display();
      }
      break;
    case 4:
      {
        exit(1);
      }
      break;
    default:
      cout << "Invalid Choice!\n";
    }
  }
  return 1;
}
