#include "Stack.h"

int main()
{
    Stack stk(3);

    stk.push(10);
    stk.push(20);
    stk.push(30);

    stk.display();


    stk.pop();
    stk.display();

    cout<<stk.peek();

    return 0;
}
