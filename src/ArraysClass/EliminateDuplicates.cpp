#include <iostream>
using namespace std;

int main(){
    int size = 11;
    int arr[size] = {1,2,3,4,5,5,6,7,8,8,9};

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(i!=j && arr[i]==arr[j]){
                for(int k=j; k<size; k++){
                    arr[k] = arr[k+1];
                }
                size--;
            }
        }
    }
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(i!=j && arr[i]==arr[j]){
                for(int k=j; k<size; k++){
                    arr[k] = arr[k+1];
                }
                size--;
            }
        }
    }
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(i!=j && arr[i]==arr[j]){
                for(int k=j; k<size; k++){
                    arr[k] = arr[k+1];
                }
                size--;
            }
        }
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}
