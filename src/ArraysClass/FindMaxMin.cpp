#include <iostream>
using namespace std;

int findMax(int arr[], int size){
    int max = arr[0];
    for(int i=1; i<size; i++){
        if(max<arr[i])
            max = arr[i];
    }
    return max;
}
int findMin(int arr[], int size){
    int min = arr[0];
    for(int i=1; i<size; i++){
        if(min>arr[i])
            min = arr[i];
    }
    return min;
}

int main(){
    int size = 10;
    int arr[size] = {3,2,4,5,10,7,8,1,9,6};

    cout<<findMax(arr,size)<<endl;
    cout<<findMin(arr,size)<<endl;

    return 0;
}
