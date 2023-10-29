#include <iostream>
using namespace std;

int prefix_sum(int arr[] , int len , int cnt)
{
    if(cnt == 0) return 0;

    return arr[cnt - 1] + prefix_sum(arr , len - 1 , cnt - 1);
}

int main() {

    int arr[] = { 1 , 8 ,2 ,10 , 3};

    cout << prefix_sum(arr , 5 , 3);

    return 0;
}
