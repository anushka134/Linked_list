#include <iostream>
using namespace std;

class Node
{
    public:
     int data;
     Node *next;
     Node *prev;
     
    
    public:
     Node()
     {
         data = 0;
         next = NULL;
         prev = NULL;
     }
};

int main() 
{
	Node* head;
	
	Node* newnode1 = new Node;
	newnode1 ->data = 10;
	
	head = newnode1;
	
	Node* newnode2 = new Node;
	newnode2 ->data = 20;
	
	Node* newnode3 = new Node;
	newnode3 ->data = 30;
	
	Node* newnode4 = new Node;
	newnode4 ->data = 40;
	
	newnode1 ->next = newnode2;
 	newnode2 ->next = newnode3;
	newnode3 ->next = newnode4;
	
    newnode2 -> prev = newnode1;
    newnode3 -> prev = newnode2;
    newnode4 -> prev = newnode3;
	
	cout<<"prevoius address "<<newnode1 -> prev<<" data1 "<<newnode1->data<<" Self address "<<newnode1<<" Next address "<<newnode1->next<<endl;
	cout<<"prevoius address "<<newnode2 -> prev<<" data1 "<<newnode2->data<<" Self address "<<newnode2<<" Next address "<<newnode2->next<<endl;
	cout<<"prevoius address "<<newnode3 -> prev<<" data1 "<<newnode3->data<<" Self address "<<newnode3<<" Next address "<<newnode3->next<<endl;
	cout<<"prevoius address "<<newnode4 -> prev<<" data1 "<<newnode4->data<<" Self address "<<newnode4<<" Next address "<<newnode4->next<<endl;
	                                                                                                                                                                                                                                                                                                                                                                                                                           
    return 0;
}

