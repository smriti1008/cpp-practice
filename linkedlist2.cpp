//circular linked list

#include<iostream>
using namespace std;

class Node{
    public:
       int data;
       Node* next;
       
       Node(int val){
        data=val;
        next=NULL;
       }
};

class circularList{
    Node* head;
    Node* tail;

    public:
        circularList() {
            head = tail = NULL;
        }
};

int main() {
    circularList cll;

    return 0;
}