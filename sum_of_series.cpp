// Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function.
// Expected Output :
// The sum of the series is : 34 

#include<iostream>
using namespace std;

int fact(int n){
    int num=0, f=1;
    
    while(num<=n-1){
        f=f+f*num;
        num++;
    }
    return f;
}
int main(){
    int sum;
    sum=fact(1)/1+fact(2)/2+fact(3)/3+fact(4)/4+fact(5)/5;
    cout <<"The sum of the series is : " <<sum;
    
}
