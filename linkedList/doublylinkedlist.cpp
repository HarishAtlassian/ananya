// A simple CPP program to introduce
// a linked list
#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;
    Node* prev;
};

// Program to create a simple linked
// list with 3 nodes
int main()
{
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;

	// allocate 3 nodes in the heap
	head = new Node();
	second = new Node();
	third = new Node();

	head->data = 1; // assign data in first node
	head->next = second; // Link first node with
    head->prev = NULL;

	second->data = 2; // assign data to second node
	second->next = third; // Link second node with the third node
    second->prev = head; // Link second node with the first node

	third->data = 3; // assign data to third node
	third->next = NULL;
    third->prev = second; // Link third node with the second node

    Node* arrow = third;
    for(; arrow->prev != NULL; arrow = arrow->prev) {
        cout<<arrow->data;
    }
    cout<<arrow->data<<endl;
	return 0;
}

// This code is contributed by rathbhupendra
