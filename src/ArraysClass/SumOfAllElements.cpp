#include <iostream>
using namespace std;

int main(){
    int size=10;
    int arr[size]= {1,2,3,4,5,6,7,8,9,10};
    int sum = 0;

    for(int i=0; i<size; i++)
        sum += arr[i];

    cout<<sum;

    return 0;
}
