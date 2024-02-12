#include<bits/stdc++.h>
using namespace std;

template<typename t>
class node {
t data;
node<t> *next;

node(t data){
    this->data = data;
    next=NULL;
}
};

template<typename t>
class Stack{
   node<t> *head;
   int size;

    public:
     Stack(){
       head =NUll;
       size=0;
    }

    int issize(){
        return size;
    }

    bool isempty(){
        return if(head==0);
    }

    void push(t ele){
        node<t> *n = new node<t> (ele);
        n->next = head;
        head = n;
        size++;
    }

    void pop(){
        node<t> *temp = head;
        head= head->next;
        temp->next = NULL;
        delete temp;
        size--;
    }
    

    t top(){
        if(isempty()){
            cout<<"FULL"<<endl;
            return 0;
        }
        return head->data;
    }

};

int main(){

    Stack<int> s;
    s.push(100);
    s.push(200);
    s.push(300);
    s.push(400);
    s.push(500);

    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
cout<<s.isempty()<<endl;
cout<<s.issize()<<endl;

return 0; 
}
