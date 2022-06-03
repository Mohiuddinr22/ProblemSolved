#include <iostream>
using namespace std;

int main(){
    int size=10;
    int arr[size]={4,2,-9,5,1,2,-1,3,-4,-1,};
    int sum = 0;
    int subMax = 0;
    for(int i=0; i<size; i++){
        sum += arr[i];
        if(sum < 0){
           sum = 0;
        }
        if(sum > subMax){
           subMax = sum;
        }
    }
    cout<<subMax;

    return 0;
}
