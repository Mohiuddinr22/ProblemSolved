#include <iostream>
using namespace std;

int main(){
    int size = 10;
    int array[size] = {1,9,1,9,1,9,1,9,1,9};
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(i!=j && array[i]==array[j]){
                while(array[i]==array[j]){
                    for(int k=j; k<size; k++)
                        array[k] = array[k+1];

                    size--;
                }
            }
        }
    }

    for(int i=0; i<size; i++){
        cout<<array[i]<<endl;
    }

    return 0;
}
