#include <iostream>
using namespace std;

int findMinDiff(int array[], int size, int students){
    int flag;
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(array[i]<array[j]){
                flag=array[i];
                array[i]=array[j];
                array[j]=flag;
            }
        }
    }
    if(students==0 || size==0){return 0;}
    if(students>size){return -1;}
    int min_diff=INT_MAX;
    for(int i=0; i+students-1<size; i++){
        int diff=array[i+students-1]-array[i];
        if(diff<min_diff){
            min_diff = diff;
        }
    }
    return min_diff;
}

int main(){
    int packets = 10;
    int chocolates[packets] = {17,13,20,14,11,8,6,15,18,9};
    int students = 3;

    cout<<findMinDiff(chocolates,packets,students);

    return 0;
}
