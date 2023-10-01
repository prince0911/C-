#include <iostream>
using namespace std;

// define a class named Stack
class Stack {
  // private data members
  int arr[10]; // an array of integers
  int top; // an integer variable to indicate the top element

  public:
  // constructor to initialize the data members
  Stack() {
    top = -1; // set top to -1
  }

  // push function to add an element to the stack
  int push(int x) {
    if (top == 9) { // check if the stack is full
      cout << "Stack overflow" << endl; // print an error message
      return -1; // return -1 to indicate failure
    }
    else {
      top++; // increment top by one
      arr[top] = x; // store the element at the top index
      return x; // return the pushed element
    }
  }

  // pop function to remove and return the top element from the stack
  int pop() {
    if (top == -1) { // check if the stack is empty
      cout << "Stack underflow" << endl; // print an error message
      return -1; // return -1 to indicate failure
    }
    else {
      int x = arr[top]; // store the top element in a variable
      top--; // decrement top by one
      return x; // return the popped element
    }
  }

  // peep function to return the top element from the stack without removing it
  int peep() {
    if (top == -1) { // check if the stack is empty
      cout << "Stack is empty" << endl; // print an error message
      return -1; // return -1 to indicate failure
    }
    else {
      return arr[top]; // return the top element
    }
  }

  // update function to replace an element at a given row index with a new element
  void update(int row, int new_element) {
    if (row < 0 || row > top) { // check if the row is valid
      cout << "Invalid row" << endl; // print an error message
      return; // exit the function
    }
    else {
      int temp[10]; // create a temporary array
      int i = 0; // create a loop variable

      while (i <= row) { // loop until the row index is reached
        temp[i] = pop(); // pop and store the elements in the temporary array
        i++; // increment i by one
      }

      push(new_element); // push the new element into the stack

      while (i > 0) { // loop until all the elements are restored
        i--; // decrement i by one
        push(temp[i]); // push the elements from the temporary array into the stack
      }
    }
  }

  // display function to print all the elements in the stack from top to bottom
  void display() {
    if (top == -1) { // check if the stack is empty
      cout << "\nStack is empty" << endl; // print an error message
      return; // exit the function
    }
    else {
      cout << "\nStack elements are:" << endl; 
      for (int i = top; i >= 0; i--) { // loop from top to bottom
        cout << arr[i] << endl; // print each element in a new line
      }
    }
  }
};

// main function to test the code
int main() {
  Stack s; // create an object of Stack class

  int choice, x, row, new_element; 
  bool flag = true;

  while (flag) { 
    
    cout << "\tMENU:-\n" << endl;
    cout << "1. Push" << endl;
    cout << "2. Pop" << endl;
    cout << "3. Peep" << endl;
    cout << "4. Update" << endl;
    cout << "5. Display" << endl;
    cout << "6. Exit" << endl;
    
    cout << "\nEnter your choice:" << endl;
    cin >> choice; 

    switch (choice) {
      case 1: 
        cout << "Enter an element to push:" << endl;
        cin >> x;
        x = s.push(x);
        s.display();
        break;

      case 2: 
        x = s.pop();
        s.display();
        break;

      case 3: 
        x = s.peep();
        s.display();
        break;

      case 4: 
        cout << "Enter the row and the new element to update:" << endl;
        cin >> row >> new_element;
        s.update(row, new_element);
         s.display();
        break;

      case 5: 
        s.display();
        break;

      case 6: 
        flag = false;
        break;

      default: 
        cout << "Invalid choice" << endl;
    }
  }

  return 0;
}
