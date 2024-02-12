#include<iostream>
using namespace std;

class stack{
    int *arr;
    int nextarr;
    int cap;

    public:
    stack() {
    
        cap =4;
    arr = new  int[cap];
    nextarr =0;
    }

    stack(int capacity){
        cap =capacity;
        arr = new int [capacity];
        nextarr =0;
            }

     int size(){    //it gives a size of arr
        return nextarr;
     }       
     bool isEmpty(){
        // if(nextarr == 0){      //first way 
        //     return true;
        // }else{
        //     return false;
        // }

        return nextarr == 0;  //it return true if it true else it gives false
     }

     //for static array

    //  void push(int ele){
    //     if(nextarr == cap){
    //         cout<<"stack is full";
    //         return ;
    //     }
    //     arr[nextarr] = ele;
    //     nextarr++;
    //  }

    //dynamic array
     void push(int ele){
        if(nextarr == cap){
            int *newarr = new int [2*cap];
            for(int i =0;i<cap;i++){
                newarr[i] = arr[i];
            }
            delete []arr;
        arr=newarr;
        cap=2*cap;
        }
        arr[nextarr] = ele;
        nextarr++;
     }


     void pop(){
        if(isEmpty()){
            cout<<"satck is empty"<<endl;
            return;
        }
        nextarr--;
     }
      
     int top(){
        if(isEmpty()){
            cout<<"its empty"<<endl;
            return -1;
        }
        return arr[nextarr -1];

     }
};



int main(){

//     stack s(4);
//     s.push(100);
//     s.push(200);
//     s.push(300);
//     s.push(400);
//     s.push(500);

//     cout<<s.top()<<endl;
//     s.pop();
//     cout<<s.top()<<endl;
//     s.pop();
//     cout<<s.top()<<endl;
//     s.pop();
//     cout<<s.top()<<endl;
// cout<<s.isEmpty()<<endl;
// cout<<s.size()<<endl;

stack s2(10);

for(int i =1 ;i<=10;i++){
    s2.push(i);
}
while(!s2.isEmpty()){
    cout<<s2.top()<<endl;
    s2.pop();
}
cout<<s2.size()<<endl;


    return 0;
}