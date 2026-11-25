//     DSA    LAB 02  
//     TASK FOR  searching an number in an array 


#include <iostream>
using namespace std;
int main()
{
    int numbers[5];
    int search;
    int found = 0;

    // sab sy pahley ma ny numbers input lea 
    cout<<"Enter 5 numbers: ";

    for (int i = 0; i < 5; i++)
    {
    cin>>numbers[i];
    }

    // then i ask for number to find 
    cout<< "Enter number to find: ";
    cin>>search;

    // i make loop to find number required 
    for (int i = 0; i < 5; i++)
    {
    if (numbers[i] == search)
   {
    cout<<"Number found at index " <<i;
    found = 1;
    break;
        }
    }

    // If number not found 
    if (found == 0)
    {
    cout<<"Number not found!";
    }
    return 0;
}

