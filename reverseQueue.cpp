#include<bits/stdc++.h>
using namespace std;

void reverses(queue<int> &q){
  stack<int> S;
  while(!q.empty()){
    S.push(q.front());
    q.pop();
}

while(!S.empty()){
    q.push(S.top());
    S.pop();
}

}


int main(){
    queue<int>q;
    for(int i= 1;i<=5;i++){
      q.push(i);
    }

    reverses(q);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}