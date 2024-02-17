#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Trees{
    public:
    T data;
    vector<Trees<T>*> children;

    Trees(T data){
        this->data = data;
    }


};

void pprint(Trees<int>* root){
    cout<<root->data<<" :";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<< " ," ;
    }
    cout<<endl;

    for(int i =0;i<root->children.size();i++){
       pprint(root->children[i]);
    }

}

void P_L_wise(Trees<int>* root){
   queue<Trees<int>*> q;
   q.push(root);
  
   while(!q.empty()){
     Trees<int>* f = q.front();
   q.pop();

   cout<<f->data<<" : " ;
   
    for(int i =0;i<f->children.size();i++){
        cout<<f->children[i]->data<< " ,";
    }
    cout<<endl;
    for(int i=0;i<f->children.size();i++){
        q.push(f->children[i]);
    }
   }

}

Trees<int>* levelInpput(){
    int rootdata;
    cout<<"enter a rootdaata"<<endl;
    cin>>rootdata;
    Trees<int>* root = new Trees<int> (rootdata);

    queue<Trees<int>*> q;
    q.push(root);

    while(!q.empty()){
        Trees<int>* f = q.front();
        q.pop();

        cout<<"Enter number of  childrens of "<<f->data<<endl;
        int n;
        cin>> n;

        for(int i=1;i<=n;i++){
            int childdata;
            cout<<"enter " <<i<< " th  child of "<<f->data << endl;
            cin>>childdata;
            Trees<int>* child = new Trees<int>(childdata);

            q.push(child);
            f->children.push_back(child);
        }
    }
    
return root;

}


int main(){

    Trees<int>* root = levelInpput();
    P_L_wise(root);

    return 0;
}