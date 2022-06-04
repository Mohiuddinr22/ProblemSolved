#include <iostream>
using namespace std;

void sortAscending(int array[], int size){
    int flag;
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(array[i]<array[j]){
                flag = array[i];
                array[i] = array[j];
                array[j] = flag;
            }
        }
    }
}
void sortDescending(int array[], int size){
    int flag;
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(array[i]>array[j]){
                flag = array[i];
                array[i] = array[j];
                array[j] = flag;
            }
        }
    }
}

int main(){
    int size=4;
    int array[size]={7,3,5,6};
    sortDescending(array,size);
    for(int i=0; i<size; i++)
        cout<<array[i]<<endl;

    return 0;
}
