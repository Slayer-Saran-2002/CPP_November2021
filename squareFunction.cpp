// Write a program in C to find the square of any number using the function.
// Test Data :
// Input any number for square : 20
// Expected Output :

// The square of 20 is : 400.00

#include<iostream>

using namespace std;
float square(float x){
    return x*x;
}

int main(){
    float num;
    cout<<"Input any number for square : "<<endl;
    cin>>num;
    cout<<"The square of "<<num<< " is :" <<square(num);
return 0;
}