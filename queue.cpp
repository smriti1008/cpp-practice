// #include<iostream>
// using namespace std;

// class Queue{
//     int *arr;
//     int front, rear, size;
//     public:

//     Queue(int n){
//         arr = new int[n];
//         size = n;
//         front = rear = -1;
//     }

//     //If queue is empty or not
//     bool isEmpty(){
//         return front == -1;
//     }

//     //queue is full or not

//     bool isFull(){
//         // return rear == size-1;
//         return (rear+1)%size==front;
//     }

//     //push element into queue

//     void push(int x){
//         if(isEmpty()){
//             cout<<"Pushed "<<x<<" into the Queue"<<endl;
//             front = rear = 0;
//             arr[0]=x;
//             return;
//         }
//         else if(isFull()){
//             cout<<"Queue overflow";
//             return;
//         }
//         else{
//             rear=(rear+1)%size;
//             arr[rear]=x;
//             cout<<"Pushed "<<x<<" into the Queue"<<endl;
//         }
//     }

//     //pop element

//     void pop(){
//         if(isEmpty())
//         {
//             cout<<"Queue is empty";
//             return;
//         }
//         else{
//             if(front==rear)
//             {
//                 cout<<"Popped "<<arr[front]<<" into the Queue"<<endl;
//                 front = rear = -1;
//             }
//             else{
//                 cout<<"Popped "<<arr[front]<<" into the Queue"<<endl;
//                 front = (front+1)%size;
//             }
//         }
//     }

//     int start(){
//         if(isEmpty())
//         {
//             cout<<"Queue is empty"<<endl;
//             return -1;
//         }
//         else
//         return arr[front];
//     }
// };

// int main(){
//     Queue q(5);
//     q.push(5);
//     q.push(15);
//     q.push(51);
//     q.pop();
//     q.pop();
//     int x = q.start();
//     if(!q.isEmpty())
//     cout<<x<<" ";
// }



//Implement queue using linkedlist

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(int value)
    {
        data=value;
        next = NULL;
    }
};

class Queue{
    Node* front;
    Node* rear;
    public:
    Queue()
    {
        front = rear = NULL;
    }

    //queue is empty or not
    bool isEmpty(){
        return front==NULL;
    }

    //push element into the queue

    void push(int x){
        if(isEmpty())
        {
            cout<<"Pushed "<< x<<" into the queue"<<endl;
            front = rear = new Node(x);
            return;
        }
        else{
            rear->next = new Node(x);
            cout<<"Pushed "<< x<<" into the queue"<<endl;
            rear=rear->next;
        }
    }
    void pop(){
        if(isEmpty())
        {
            cout<<" Queue underflow";
        }
        else{
            cout<<"Popped "<< front->data<<" from the queue"<<endl;
            Node* temp = front;
            front = front->next;
            delete temp;
        }
    }

    int start(){
        if(isEmpty())
        {
            cout<<"queue is empty"<<endl;
            return -1;
        }
        else{
            return front->data;
        }
    }
};
int main(){
    Queue q;
    q.push(5);
    q.push(15);
    q.push(115);
    q.push(1115);
    q.pop();
    cout<<q.start()<<endl;
}
