#include <iostream>
#include<stack>
using namespace std;


class Stack {
    public:
     int *arr;
     int size ;
     int top;
    Stack(int size) {
        this -> size = size;
        top = -1;
        arr = new int[size];
       
    }
    void push(int value) {
        if(size - top > 1) {
            top++;
            arr[top] = value;
        }else {
            cout<< "Stack Overflow" << endl;
        }
    }
    void pop() {
        if(top >= 0) {
            top--;
            arr[top + 1] = 0;
        }else{
            cout << "Stack Underflow" << endl;
        }
    } 
    int peek() {
        if(top >= 0 && top < size) {
            return arr[top];
        }else{
            return -1; 
        }
    }

    bool isEMpty() {
        if(top == -1) {
            return true;
        }else{
            return false;
        }
    }
};
int main() {
    stack<int> s;

    Stack st(4);
    st.push(1);
    st.push(9);
    st.push(5);
    st.push(6);

    return 0;
}