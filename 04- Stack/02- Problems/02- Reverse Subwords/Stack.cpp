#include "Stack.h"

string reverse_subwords(string line)
{
    string result;
    line += ' ';
    Stack stk(line.size());
    for (int i = 0; i < (int)line.size(); ++i) {
        if(line[i] == ' ')
        {
            while(!stk.isEmpty())
                result += stk.pop();
            result += ' ';
        }else
            stk.push(line[i]);
    }
    return result;
}

int main()
{

    string line;
    getline(cin,line);

    cout<<reverse_subwords(line)<<endl;

    return 0;
}
