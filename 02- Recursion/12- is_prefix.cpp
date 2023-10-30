#include <iostream>
using namespace std;

bool is_prefix(string main , string prefix , int start = 0)
{
    if(start == prefix.size()) return true;

    if(main[start] != prefix[start]) return false;

    return is_prefix(main , prefix , start+1);
}
int main() {


    cout << is_prefix("abcdefg" , "abcd" , 3)<<endl;
    cout << is_prefix("abcdefg" , "abf" , 3)<<endl;
    cout << is_prefix("abcdefg" , "" , 3)<<endl;


    return 0;
}
