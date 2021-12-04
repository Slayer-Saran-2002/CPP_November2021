// Write a program in C to check a given number is even or odd using the function. Go to the editor
// Test Data :
// Input any number : 5
// Expected Output :
//  The entered number is odd.


#include<iostream>
using namespace std;
int odd_or_even(int num){
    if(num%2==0)
    {
        cout<<"The entered number is even."<<endl;
    }
    else if(num%2==1){
        cout<<"The entered number is odd."<<endl;

    }
return num;
}
int main(){
    int num;
    cout<<"Input any number : "<<endl;
    cin>>num;
    odd_or_even(num);
return 0;
}


//************** Alternate Method******************

// #include<iostream>
// using namespace std;
// int odd_or_even(int num){
//    return (num & 1);//The & operator does a bitwise and
// }
// int main(){
//     int num;
//     cout<<"Input any number : "<<endl;
//     cin>>num;
//     if(odd_or_even(num))
//     {
//         cout<<"The entered number is odd."<<endl;
//     }
//     else{
//         cout<<"The entered number is even."<<endl;
//     }
// return 0;
// }