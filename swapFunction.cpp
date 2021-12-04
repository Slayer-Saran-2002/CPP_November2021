/*Write a program in C to swap two numbers using function. Go to the editor
Test Data :
Input 1st number : 2
Input 2nd number : 4
Expected Output :

Before swapping: n1 = 2, n2 = 4                                                  
After swapping: n1 = 4, n2 = 2
*/
#include<iostream>
using namespace std;

void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x, y;
    cout<<"Input 1st number : "<<endl;
    cin>>x;
    cout<<"Input 2nd number : "<<endl;
    cin>>y;
    cout<<"Before swapping: n1 = "<<x<<" n2 = "<<y<<endl;
    swap(&x,&y);
    cout<<"After swapping: n1 = "<<x<<" n2 = "<<y<<endl;
    
return 0;
}