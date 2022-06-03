#include <iostream>
using namespace std;

int main(){
    int size = 10;
    int arr[size] = {1,2,3,4,5,6,7,8,9,10};

    for(int i=0; i<size; i++)
        cout<<arr[i]<<endl;

    int index;
    cout<<"Input index to delete value : ";
    cin>>index;

    if(index<0 || index>=size)
        cout<<"Error!"<<endl;
    else{
        for(int i=index; i<size; i++)
            arr[i] = arr[i+1];

        size--;
    }

    for(int i=0; i<size; i++)
        cout<<arr[i]<<endl;

    return 0;
}
