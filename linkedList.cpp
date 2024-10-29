#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int value): data(value), next(NULL){}
};

void Traversal(Node *n){
    while (n != NULL)
    {
        cout<<"Element: "<<n->data<<endl;
        n = n->next;
    }
    
}
int main(){
    Node *head = new Node(1);
    Node *second = new Node(3);
    Node *third = new Node(5);
    Node *forth = new Node(7);
    Node *fifth = new Node(9);

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    fifth->next = NULL;

    Traversal(head);
}