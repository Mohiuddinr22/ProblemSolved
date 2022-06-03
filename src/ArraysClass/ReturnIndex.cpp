#include <iostream>
using namespace std;

int returnIndex (int arr[], int size, int item){
    for(int i=0; i<size; i++){
        if(arr[i]==item)
            return i;
    }
        return -1;
}

int main(){
    int size=10;
    int arr[size] = {1,2,3,4,5,6,7,8,9,10};

    cout<<returnIndex(arr,size,1)<<endl;

    return 0;
}
