#include<iostream>
using namespace std;
class node{
    public:
     int data;
      node *next;
      node(int value):data(value),next(NULL){}
};
 void Tranversal(node *n){
    while(n != NULL){
        
    cout<<"LINKED LIST= "<<n->data<<endl;
    n = n->next;
    }
    }
 
int main(){
    cout<<"NAME=PREOTA SAHA"<<endl;
    //create node
    node *head= new node(5);
    node *second= new node(10);
    node *third= new node(15);

     //linked node
     head->next= second;
     second->next=third;
     third->next = NULL;

     Tranversal(head);
 return 0;
}