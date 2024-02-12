#include<bits/stdc++.h>  // NOLINT
using namespace std;


template<typename T>
class queues{
T *arr;
T firstele =-1;
T nextele =0;
int cap = 5;
int size;

public:
queues(){
    int capacity =cap;
    arr=new T[capacity];
    firstele=-1;
    nextele =0;
    size=0;
}

queues(int capacity){
  cap = capacity;
    arr=new T[capacity];
    firstele=-1;
    nextele =0;
    size=0;
}

int getsize(){
    return size;
}

bool isempty(){
    return size==0;
}

void push(T ele){
    if(size==cap){
        cout<<"queues is full"<<endl;
        return;
    }
arr[nextele] = ele;
nextele = (nextele +1) % cap;
if(firstele==-1){
    firstele = 0; 
}
size++;

}

T front(){
    if(isempty()){
        cout<<"is empty"<<endl;
        return 0;
    }
    return arr[firstele];
}

void pop(){
    if(isempty()){
        cout<<"is empty"<<endl;
        return;
    }
    firstele = (firstele+1) % cap;  //to create a circular loop
    size--;
}
};

int main(){
    queues<int> q(5);
    q.push(100);
    q.push(220);
    q.push(330);
    q.push(440);
    q.push(550);
    q.push(660);
    q.push(770);

    cout<<q.front()<<endl;

    return 0;
}