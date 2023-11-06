#include "Stack.h"

int main()
{
    Stack stk(3);
    int result;

    stk.push(10);
    stk.push(20);
    stk.push(30);

    stk.display();


    stk.pop(result);
    stk.display();

    if(stk.peek(result))
        cout<<result;

    return 0;
}
