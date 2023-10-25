#include <iostream>
using namespace std;

class Node
{
    public:
     int data;
     Node *next;
    
    public:
     Node()
     {
         data = 0;
         next = NULL;
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
	
	cout<<"data1 "<<newnode1->data<<" Self address "<<newnode1<<" Next address "<<newnode1->next<<endl;
	cout<<"data2 "<<newnode2->data<<" Self address "<<newnode2<<" Next address "<<newnode2->next<<endl;
	cout<<"data3 "<<newnode3->data<<" Self address "<<newnode3<<" Next address "<<newnode3->next<<endl;
	cout<<"data4 "<<newnode4->data<<" Self address "<<newnode4<<" Next address "<<newnode4->next<<endl;
	                                                                                                                                                                                                                                                                                                                                                                                                                           
    return 0;
}


