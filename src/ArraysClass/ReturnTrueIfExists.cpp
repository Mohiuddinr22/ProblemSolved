#include <iostream>
using namespace std;

bool exists(int arr[], int size, int item){
    for(int i=0; i<size; i++){
        if(arr[i]==item)
            return true;
    }
    return false;
}

int main(){
    int size = 10;
    int arr[size]={1,2,3,4,5,6,7,8,9,10};
    cout<<exists(arr,size,6);
    return 0;
}
