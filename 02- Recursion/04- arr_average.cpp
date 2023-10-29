#include <iostream>
using namespace std;

double arr_average(int arr[] , int len)
{
    if(len == 1) return arr[0];

    int average = arr_average(arr , len - 1);

    return (average + arr[len - 1]) / len;
}
int main() {

    int arr[] = { 1 , 8 ,2 ,10 , 3};

    cout<<arr_average(arr , 4)<<endl;

    return 0;
}
