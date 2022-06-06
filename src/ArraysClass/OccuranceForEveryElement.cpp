#include <iostream>
using namespace std;

int main(){
    int size = 10;
    int array[size] = {1,1,1,1,1,1,1,1,1,1};
    int newArray[] = {1,1,1,1,1,1,1,1,1,1};
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

    int numCount[size];
    for(int i=0; i<size; i++)
        numCount[i]=0;

    for(int i=0; i<size; i++){
        for(int j=0; j<10; j++){
            if(array[i]==newArray[j]){
                numCount[i]++;
            }
        }
    }

    for(int i=0; i<size; i++)
        cout<<array[i]<<" is = "<<numCount[i]<<" times."<<endl;

    return 0;
}
