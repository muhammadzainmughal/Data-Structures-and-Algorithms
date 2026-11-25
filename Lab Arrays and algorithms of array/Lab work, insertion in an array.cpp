#include<iostream>
using namespace std;

int main()
{
	int arr[10]={10,20,30,40};
	int n = 4; // here 4 represent numbers in array 
	
	// pahley ma old data display karta hu 
	cout<<"Old array ";
	for (int i = 0; i < n; i++) {
        cout<<arr[i] << " ";
    }

   // is ky baad ma insertion ky lea likh rha 
   
   int pos = 2;      //  ma ny position 2 slect ki 
   int value = 25;  //  and value 25 ko add kar rha 
   
   for (int i = n; i > pos; i--) {
    arr[i] = arr[i - 1];}

   arr[pos] = value;
   n++;
    
    // ab ma ny new display karni hy 
    // Display new array
    cout << "\nNew Array i make : ";
    
    for (int i = 0; i<n; i++) {
    cout<< arr[i] << " ";
    }

    return 0;
    }
   
