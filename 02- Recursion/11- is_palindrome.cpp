#include <iostream>
using namespace std;

bool is_palindrome(int arr[] , int start , int end)
{
    if(start >= end) return true;

    if(arr[start] != arr[end]) return false;

    return is_palindrome(arr , start+1 , end-1);
}

bool is_palindromeV2(int arr[] , int len)
{
    if(len <= 0 ) return true;

    if(arr[0] != arr[len]) return false;

    return is_palindromeV2(arr+1 , len-2 );
}
int main() {

    int arr[] = { 1 , 8 ,2 ,8 , 1};

    cout << is_palindrome(arr , 0 , 4)<<endl;
    cout << is_palindromeV2(arr , 4)<<endl;

    return 0;
}
