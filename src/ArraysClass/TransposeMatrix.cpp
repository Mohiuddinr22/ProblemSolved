#include <iostream>
using namespace std;

int main(){
    int row=3, column=4;
    int matrix[row][column] = { {1,6,7,9},
                                {2,4,8,5},
                                {3,1,9,4}
                                        };
    for(int i=0; i<column; i++){
        for(int j=0; j<row; j++){
            cout<<matrix[j][i];
        }
        cout<<endl;
    }

    return 0;
}
