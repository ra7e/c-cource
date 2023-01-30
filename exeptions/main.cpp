#include <iostream>

using namespace std;

class StackOverflowExp : public exception {
public:
    /*char *what(){
        char *msg = "stdoverflowexp";
        return msg;
    }*/
    StackOverflowExp(){
        cout << "Overflow exeption" << endl;
    }
};

class StackUnderflowExp : public exception {
public:
    StackUnderflowExp(){
        cout << "Underflow exeption" << endl;
    }

};

class Stack{
private:
    int *stk_ptr;
    size_t size;
    int top = -1;

public:
    Stack(size_t sz) : size(sz){
        stk_ptr = new int[size];
    };

    void push(int number){
        if(top == size -1)
            throw StackOverflowExp();
        stk_ptr[top] = number;
        top++; 
    }

    void pop(){
        if (top == 0){
            throw StackUnderflowExp();
        }
        stk_ptr[top] = 0;
        top--;
    }
};

int main(void){
    Stack stack(5);
    try{
        stack.push(1);
        stack.push(2);
        stack.push(3);
        stack.push(4);
        stack.push(5);
        //stack.push(6);
        stack.pop();
        stack.pop();
        stack.pop();
        stack.pop();
        stack.pop();
        stack.pop();
        stack.pop();
    }catch (StackOverflowExp e){
        //cout << "Overflow exeption" << endl;
    }catch (StackUnderflowExp e){
        //cout << "Underflow exeption" << endl;
    }
}
