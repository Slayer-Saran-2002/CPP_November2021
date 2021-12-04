// Write a program in C to get the largest element of an array using the function.
// Test Data :
// Input the number of elements to be stored in the array :5
// Input 5 elements in the array :
// element - 0 : 1
// element - 1 : 2
// element - 2 : 3
// element - 3 : 4
// element - 4 : 5
// Expected Output :
// The largest element in the array is : 5

#include <iostream>
using namespace std;
int n;
int largestNum(int arr[])
{
    int i = 0, max = arr[0];
    while (i < n)
    {
        if (max < arr[i])
            max = arr[i];
        else
            i++;
    }
    return max;
}
int main()
{
    cout << "Input the number of elements to be stored in the array : ";
    cin >> n;
    int arr[n];
    cout<<"Input "<<n<<" elements in the array : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout  << "element - " << i << " : ";
        cin >> arr[i];
    }
    cout << "The largest element in the array is : " << largestNum(arr);

    return 0;
}