#include <iostream>
using namespace std;

int main(){
    int row1 = 2;
    int column1 = 2;
    int row2 = 2;
    int column2 = 1; 
    int matrix1[row1][column1] = {{1,2}
                                 ,{3,4}};
    
    int matrix2[row2][column2] = {{1}
                                 ,{3}};
    
    int multiMatrix[row1][column2];

    for(int i=0; i<row1; i++){
        for(int j=0; j<column2; j++){
            multiMatrix[i][j]=0;
            for(int k=0; k<row2; k++){
                multiMatrix[i][j] += matrix1[i][k]*matrix2[k][j];
            }
            cout<<multiMatrix[i][j]<<"\t";
        }
    }

    return 0;
}