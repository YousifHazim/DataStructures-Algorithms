#include <iostream>
using namespace std;

int arr_sum(int arr[] , int len)
{
    if(len == 1) return arr[0];

    int sum = arr_sum(arr , len - 1);

    return sum + arr[len - 1];
}
int main() {

    int arr[] = { 1 , 8 ,2 ,10 , 3};

    cout<<arr_sum(arr , 5)<<endl;

    return 0;
}
