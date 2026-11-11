#include<iostream>
using namespace std;

class Queue{
    int *arr;
    int front, rear, size;
    public:

    Queue(int n){
        arr = new int[n];
        size = n;
        front = rear = -1;
    }

    //If queue is empty or not
    bool isEmpty(){
        return front == -1;
    }

    //queue is full or not

    bool isFull(){
        // return rear == size-1;
        return (rear+1)%size==front;
    }

    //push element into queue

    void push(int x){
        if(isEmpty()){
            cout<<"Pushed "<<x<<" into the Queue"<<endl;
            front = rear = 0;
            arr[0]=x;
            return;
        }
        else if(isFull()){
            cout<<"Queue overflow";
            return;
        }
        else{
            rear=(rear+1)%size;
            arr[rear]=x;
            cout<<"Pushed "<<x<<" into the Queue"<<endl;
        }
    }

    //pop element

    void pop(){
        if(isEmpty())
        {
            cout<<"Queue is empty";
            return;
        }
        else{
            if(front==rear)
            {
                cout<<"Popped "<<arr[front]<<" into the Queue"<<endl;
                front = rear = -1;
            }
            else{
                cout<<"Popped "<<arr[front]<<" into the Queue"<<endl;
                front = (front+1)%size;
            }
        }
    }

    int start(){
        if(isEmpty())
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else
        return arr[front];
    }
};

int main(){
    Queue q(5);
    q.push(5);
    q.push(15);
    q.push(51);
    q.pop();
    q.pop();
    int x = q.start();
    if(!q.isEmpty())
    cout<<x<<" ";
}