#include <iostream>
using namespace std;

int main(){
    int matrix1[4][4] = {{ 1, 2, 3, 4},
                         { 5, 6, 7, 8},
                         { 9,10,11,12},
                         {13,14,15,16}};
    
    int matrix2[5][5] = {{ 1, 2, 3, 4, 5},
                         { 6, 7, 8, 9,10},
                         {11,12,13,14,15},
                         {16,17,18,19,20},
                         {21,22,23,24,25}};

    int sum1 = 0;
    int sum2 = 0;

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(i==j || i+j==3){
                sum1 += matrix1[i][j];
            }
        }
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(i==j || i+j==4){
                sum2 += matrix2[i][j];
            }
        }
    }

    cout<<"Diagonally sum of matrix1 : "<<sum1<<endl;
    cout<<"Diagonally sum of matrix2 : "<<sum2<<endl;

    return 0;
}