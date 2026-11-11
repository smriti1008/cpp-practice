#include<iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};
class List{
    Node* head;
    Node* tail;
    public:

    List(){
    head= tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        // Node newNode(val);  
        if(head== NULL){
            head = tail = newNode;
            return;
        } 
        else{
            newNode->next =head;
            head = newNode;
            //for DLL head ka prev should now point to the newnode
            //head->prev=newNode;  then head=newNode
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);

        if(head==NULL){
            head=tail=newNode;
        }
        else{
            tail->next = newNode;
            tail=newNode;
            //for DLL tail ka next should now point to the newnode
            //newNode->prev=tail; tail->next=newNode
        }
    }

    void pop_front(){
        if(head==NULL){
            return;
        }
        else{
            Node*temp= head;
            head=head-> next;//to del temp
            //for DLL if(head!=Null){head->prev=NULL}
            temp->next=NULL;
            delete temp;
        }
    }
    void printLL(){
        Node* temp = head;

        while(temp!= NULL){
            cout<< temp->data<<"->";
            temp = temp-> next;
        }
        cout<<"NULL"<<endl;
    }
};
int main(){

    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_back(3);
    // ll.pop_front();
    ll.printLL();
    return 0;
}