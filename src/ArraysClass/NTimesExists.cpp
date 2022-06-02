#include <iostream>
using namespace std;

int main(){
    int size=10;
    int arr[size]={1,4,2,5,7,3,5,6,6,8};
    for(int i=0; i<size; i++)
        cout<<arr[i]<<endl;

    int num;
    int count=0;
    cout<<"Input a number to search : ";
    cin>>num;

    for(int i=0; i<size; i++){
        if(arr[i]==num){
            count++;
        }
    }

    cout<<"The number "<<num<<" occurs "<<count<<" times in the array."<<endl;

    return 0;
}
