#include<iostream>
using namespace std;
class node{
    public:
    int data
     Node *prev;
      node value:data(value),next(NULL){}
};

void printList(Node *n){
    while(n !=NULL){
        cout<<"LINKED LIST= "<<n->data<<endl;
        n=n->next;
    }
}

int main()
{
    cout<<"NAME= PREOTA SAHA ";

  //  Node*NULL=New Node(20);
    Node*third=New Node(15);
    Node*Second=New Node(10);
    node*Head=New Node(5);

    null->prev= third;
    third->prev=second;
    second->prev=head;
    void printList(NULL);
    
 return 0;
}