#include <iostream>
using namespace std;

int main(){
    int size1 = 7;
    int size2 = 6;
    int arr1[size1];
    int arr2[size2];

    cout<<"Input values of first array : "<<endl;
    for(int i=0; i<size1; i++){
        cin>>arr1[i];
    }
    cout<<"1st array is : "<<endl;
    for(int i=0; i<size1; i++){
        cout<<arr1[i]<<endl;
    }

    cout<<"Input values of second array : "<<endl;
    for(int i=0; i<size2; i++){
        cin>>arr2[i];
    }
    cout<<"2nd array is : "<<endl;
    for(int i=0; i<size2; i++){
        cout<<arr2[i]<<endl;
    }

    int newArray[size1];
    int newSize = 0;
    for(int i=0; i<size1; i++){
        for(int j=0; j<size2; j++){
            if(arr1[i]==arr2[j]){
                newArray[newSize] = arr1[i];
                newSize++;
            }
        }
    }
    if(newSize!=0){
        cout<<"Array of common elements is : "<<endl;
        for(int i=0; i<newSize; i++){
            cout<<newArray[i]<<endl;
        }
    }
    else{
        cout<<"No common elements!"<<endl;
    }

    return 0;
}
