#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(){
            this->next = NULL;
        }
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

void printLL(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}

   void insertAtHead(Node* &head, int data){
    //create a new node
    Node* newNode= new Node(data);
    //attech new node to head node
    newNode->next = head;
    //update head;
    head = newNode;
   }


int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth-> next = fifth;


    Node* head = first;
    cout<<"printing LL"<<endl;
    printLL(head);

    insertAtHead(head, 500);
    cout<<"New LL"<<endl;
    printLL(head);
    

return 0;
}