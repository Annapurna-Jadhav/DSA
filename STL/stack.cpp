#include <iostream>
#include <stack>
using namespace std;

void explainStack() {
    stack<int> st;

    // Adding elements
    st.push(1);        // Adds 1 to the stack
    st.push(2);        // Adds 2 to the stack
    st.push(3);        // Adds 3 to the stack

    // Display the top element
    cout << "Top element after push: " << st.top() << endl;

    // Removing elements
    st.pop();          // Removes the top element (3)

    // Display the top element
    cout << "Top element after pop: " << st.top() << endl;

    // Checking if the stack is empty
    if (st.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    // Display the size of the stack
    cout << "Size of the stack: " << st.size() << endl;

    // Accessing elements
    cout << "Top element: " << st.top() << endl;

    // Clearing the stack
    while (!st.empty()) {
        st.pop();
    }

    // Checking if the stack is empty after clearing
    if (st.empty()) {
        cout << "Stack is empty after clearing" << endl;
    } else {
        cout << "Stack is not empty after clearing" << endl;
    }

    // Using swap
    stack<int> st1, st2;
    st1.push(1);
    st1.push(2);
    st2.push(3);
    st2.push(4);

    cout << "Top element of st1 before swap: " << st1.top() << endl;
    cout << "Top element of st2 before swap: " << st2.top() << endl;

    st1.swap(st2); // Swap the contents of st1 and st2

    cout << "Top element of st1 after swap: " << st1.top() << endl;
    cout << "Top element of st2 after swap: " << st2.top() << endl;
}

int main() {
    explainStack();
    return 0;
}