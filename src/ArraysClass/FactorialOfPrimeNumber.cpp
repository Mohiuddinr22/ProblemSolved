#include <iostream>
using namespace std;
bool isPrime(int number){
    int count;
    if(number <= 0){
        return false;
    }
    for(int i=2; i<=(number/2); i++){
        if(number%i==0){
            count = 1;
            break;
        }
    }
    return count!=1;
}
int getFactorial(int number){
    if(isPrime(number)){
        for(int i = number-1; i>=1; i--){
            number *= i;
        }
    }
    else{
        cout<<"Error!!"<<endl;
        return -1;
    }
    return number;
}
int main() {
    int num;
    cin>>num;
    cout<<getFactorial(num);

    return 0;
}
