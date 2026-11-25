// Semester 03
// Data Structures and Algorithms
// Task: Deleting an Element from an Array

#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int position;

    // Display the old array
    cout<<"Old Array: ";
    for (int i = 0; i < n; i++)
    {
    cout << arr[i] << " ";
    }

    // I Take position from the user
    cout << "\nEnter the position to delete: ";
    cin >> position;

    // ma ny position check ki 
    if (position < 0 || position >= n)
    {
    cout<<"Invalid position!";
    }
    else
    {
    
    for (int i = position; i < n - 1; i++)
    {
    arr[i] = arr[i + 1];
    }

    n--;

    // Phir ma ny new array ko display kea 
    cout<<"Updated Array: ";
    for (int i = 0; i < n; i++)
    {
    cout<<arr[i]<< " ";
    }
    }

    return 0;
}
