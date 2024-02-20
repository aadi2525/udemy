// #include<bits/stdc++.h>
// using namespace std;


// template<typename t>
// class node{
//     public:
//     t data;
//     node<t> *next;

//     node(t data){
//         this->data = data;
//         next = NULL;
//     }

// };


// template<typename t>
// class sstack{
//    node<t> *head;
//    int size;
//     public:

//      sstack(){
//        head =NULL;
//        size=0;
//     }

//     int issize(){
//         return size;
//     }

//     bool isempty(){
//         return (head == 0);
//     }

//     void push(t ele){
//         node<t> *n = new node<t>(ele);
//         n->next = head;
//         head = n;
//         size++;
//     }

//     void pop(){
//         node<t> *temp = head;
//         head= head->next;
//         temp->next = NULL;
//         delete temp;
//         size--;
//     }
    

//     t top(){
//         if(isempty()){
//             cout<<"FULL"<<endl;
//             return 0;
//         }
//         return head->data;
//     }

// };

// int main(){

//     sstack<int> s;
//     s.push(100);
//     s.push(200);
//     s.push(300);
//     s.push(400);
//     s.push(222);

//     cout<<s.top()<<endl;
//     s.pop();
//     cout<<s.top()<<endl;
//     s.pop();
//     cout<<s.top()<<endl;
//     s.pop();
//     cout<<s.top()<<endl;
// cout<<s.isempty()<<endl;
// cout<<s.issize()<<endl;

// return 0; 
// }



#include<iostream>
using namespace std;

int main(){

    int a[5] = { 1, 2 , 3, 8 ,5};

    for(int i =0;i< sizeof(a)/sizeof(int);i++){
        cout<<a[i]+1;
    }
    cout<<endl;

    int c =3 , b=2;
    cout<<3 / 2<<endl;

    return 0;
}