#ifndef DATASTRUCTURE_ALOGRITHM_STACK_H
#define DATASTRUCTURE_ALOGRITHM_STACK_H

#include <iostream>
#include <cassert>
using namespace std;

typedef char type;

class Stack {

private:
    int size{ };
    int top { };
    type *array { };

public:
    Stack(int size): size(size) , top(-1) {
        array = new type[size];
    }

    ~Stack(){
        delete[] array;
    }

    void push(int x)
    {
        assert(!isFull());
        array[++top] = x;
    }

    int pop()
    {
        assert(!isEmpty());
        return array[top--];
    }

    int peek()
    {
        assert(!isEmpty());
        return array[top];
    }

    int isFull()
    {
        return top == size - 1;
    }

    int isEmpty()
    {
        return top == -1;
    }

    void display()
    {
        for (int i = top; i >= 0 ; i--) {
            cout<<array[i]<<" ";
        }
        cout<<endl;
    }
};

#endif //DATASTRUCTURE_ALOGRITHM_STACK_H
