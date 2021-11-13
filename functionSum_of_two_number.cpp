#include<iostream>
using namespace std;

// int sum(int a, int b){
//     return a+b;
// }

void add(int a, int b,int &sum){
  sum = a+b;
}

int main()
{
    int x,y,sum;
    cout<<"Enter two number"<<endl;
    cin>>x>>y;
    //    cout <<"The sum is "<<sum(x,y); 

    add(x,y,sum);
    cout <<"The sum is "<<sum; 
return 0;
}