//      	Semester 03         Data Structures And Algorithms
//      dsa lab   task Singly Linked List

#include <iostream>
using namespace std;

struct Node   // sab sy pahley ma ny aik node ka structure bnaya  
{
    int data;
    Node* next;
};

int main()
{
	cout<<" ******  Singly Linked list  *******"<<endl;
    Node* head = NULL;
    Node* tail = NULL;

    // phir ma ny 5 nodes bnayi 
    cout<< "Enter 5 values: " <<endl;

    for (int i = 1; i <= 5; i++)
    {
    Node* newNode = new Node;  // yaha ma ny aik new node bnaya and us ka address memory ma new node ky name sy save kea 
    cin>>newNode->data;    // yaha ma ny user sy data le kar new node ma save kea 
    newNode->next = NULL;  /// kuky agla node abhi empty hy 

    if (head == NULL)
    {
    head = newNode;
    tail = newNode;
    }
    else
    {
    tail->next = newNode;
    tail = newNode;
    }
        
    }

    // Phir ma ny linked list and count nodes ko display ka 
    Node* temp = head;
    int count = 0;

    cout << "\nSingly Linked List: ";

    while (temp != NULL)
    {
    cout<<temp->data<<" -> ";
    count++;

    temp = temp->next;
    }

    cout<<"NULL"<<endl;
    cout<<"Total Nodes:"<<count<<endl;

    // Delete all nodes
    temp = head;

    while (temp != NULL)
    {
    Node* nextNode = temp->next;
    delete temp;
    temp = nextNode;
    }

    return 0;
}

