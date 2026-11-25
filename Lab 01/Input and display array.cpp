// Semester 03      Lab 1    DSA 
// Task: Input an Array of Numbers and Display It

#include <iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n;

    // I took size of array from user 
    cout << "Enter the size of array: ";
    cin >> n;

    
    cout<<"Enter "<<n<<" numbers: ";
    for (int i = 0; i < n; i++)
    {
    cin>>arr[i];
    }

    // phir ma ny array ko diaplay karaya 
    cout<<"Array Elements are: ";
    for (int i = 0; i < n; i++)
    {
    cout<<arr[i]<< " ";
    }

    return 0;
}

