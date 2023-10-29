#include <iostream>
using namespace std;

void right_max(int arr[] , int len)
{
    if(len == 1) return ;

    right_max(arr + 1, len - 1);

    arr[0] = max(arr[0] , arr[1]);
}
int main() {

    int arr[] = { 1 , 8 ,2 ,10 , 3};

    right_max(arr , 5);

    for(int i = 0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
