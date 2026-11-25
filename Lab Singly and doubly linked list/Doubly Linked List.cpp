//      	Semester 03         Data Structures And Algorithms
//      dsa lab   task Doubly Linked List

#include <iostream>
using namespace std;

// pahley ma aik node ka structure bnata hu 
struct Node
{
    int data;
    Node* prev;
    Node* next;
};

int main()
{
	cout <<" ******  Doubly Linked list  *******"<<endl;
    Node* head = NULL;
    Node* tail = NULL;

    // Phir ma ny 5 node bnaye 
    cout<<"Enter 5 values: "<<endl;

    for (int i = 1; i <= 5; i++)
    {
    Node* newNode = new Node;
    cin>>newNode->data;

    newNode->prev = NULL;
    newNode->next = NULL;

    if (head == NULL)
    {
    head = newNode;
    tail = newNode;
    }
    else
    {
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
        }
    }
    
    /*   ab yahan per muje forward and backward traversal dono zaroorat hain 
       kuky ma yahan doubly linked list bna rha */
    
    // Forward traversal ky lea 
    Node* temp = head;
    int count = 0;
    cout<<"\nForward Traversal: ";

    while (temp != NULL)
    {
    cout<<temp->data<< " <-> ";
    count++;
    temp = temp->next;
    }
    cout << "NULL" << endl;

    // Backward traversal ky lea 
    temp = tail;
    cout << "Backward Traversal: ";
    while (temp != NULL)
    {
    cout<<temp->data<< " <-> ";
    temp = temp->prev;
    }

    cout<<"NULL"<<endl;
    cout<<"Total Nodes: "<<count<<endl;
    
    // Phir ma ny nodes to ouupy ki hui memory ko free karney ky lea use akr ky delete kar dea 
    temp = head;

    while (temp != NULL)
    {
    Node* nextNode = temp->next;
    delete temp;
    temp = nextNode;
    }

    return 0;
}

