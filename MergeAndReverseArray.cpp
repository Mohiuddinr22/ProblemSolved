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

    int newArr1[size1+size2];
    int j=0;
    for(int i=size1-1; i>=0; i--,j++){
        newArr1[j] = arr1[i];
    }
    for(int i=size2-1; i>=0; i--, j++){
        newArr1[j] = arr2[i];
    }

    cout<<"The new array is : "<<endl;
    for(int i=0; i<(size1+size2); i++){
        cout<<newArr1[i]<<endl;
    }
    return 0;
}
