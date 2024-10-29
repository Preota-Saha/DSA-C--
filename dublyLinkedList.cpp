#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int value):data(value),next(NULL),prev(NULL){}
};
void print(Node *n){
    while(n !=NULL){
        cout<<"Linked List= "<<n->data<<endl;
        n=n->next;
    }
}
int main()
{
    Node *head= new Node(45);
    Node *second= new Node(40);
    Node *third= new Node(35);

    head->next=second;
    second->next=third;
    third->next=NULL;

   third->prev=second;
    second->prev=head;
    head->prev=NULL;
    
    print(head);


 return 0;
}