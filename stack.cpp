// #include<iostream>
// #include<vector>
// #include<list>
// using namespace std;

// class Stack{
//     list<int> ll;
    
// public:
    
//     void push(int val){
//         ll.push_front(val);
//     }

//     void pop(){
//         ll.pop_front();
//     }

//     int top(){
//         return ll.front();
//     }
    
//     bool empty(){
//         return ll.size()==0;
//     }
// };

// int main(){

//     Stack s;

//     s.push(20);
//     s.push(10);

//     while(!s.empty()){
//         cout<< s.top() <<" ";
//         s.pop();
//     }
//     cout<<endl;
//     return 0;
// }

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){

    stack<int> s;

    s.push(20);
    s.push(10);

    while(!s.empty()){
        cout<< s.top() <<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}