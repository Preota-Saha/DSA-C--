#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int value) : data(value), next(NULL) {}
};
void Tranversal(Node *n){
    while(n != NULL){
        
    cout<<"LINKED LIST= "<<n->data<<endl;
    n = n->next;
    }
    }
int main(){
     
    Node *head= new Node(3);
    Node *second= new Node(2);
    Node *third= new Node(7);

     //linked node
     head->next= second;
     second->next=third;
     third->next=NULL;

//create node
     Node *a=new Node(5);
     a->next=NULL;

     //insert at head
     a->next = head;
        head = a;

    //insert at end
    Node*ptr;
     ptr=head;
     while(ptr->next !=NULL){
        ptr=ptr->next;

     }
     ptr->next=a;

     //at any point
     Node*ptr;
     ptr=head;
     while(ptr->data !=2){
        ptr=ptr->next;
     }
     a->next=ptr->next;
     
     ptr->next=a;


        Tranversal(head);

        return 0;
    }
     
     



    