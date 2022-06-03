#include <iostream>
using namespace std;

int main(){
    int sizeOfArray = 10;
    int arr[sizeOfArray] = {3,4,6,2,3,3,5,2,1,6};
    int newArr[] = {3,4,6,2,3,3,5,2,1,6};
    for(int i=0; i<(sizeOfArray-1); i++){
        for(int j=0; j<sizeOfArray; j++){
            if(i!=j && arr[i]==arr[j]){
                for(int k=j; k<sizeOfArray; k++){
                    arr[k] = arr[k+1];
                }
                sizeOfArray--;
            }
        }
    }

    int numCount[sizeOfArray];
    for(int i=0; i<sizeOfArray; i++)
        numCount[i]=0;

    for(int i=0; i<sizeOfArray; i++){
        for(int j=0; j<10; j++){
            if(arr[i]==newArr[j]){
                numCount[i]++;
            }
        }
    }

    for(int i=0; i<sizeOfArray; i++)
        cout<<arr[i]<<" is = "<<numCount[i]<<" times."<<endl;

    return 0;
}
