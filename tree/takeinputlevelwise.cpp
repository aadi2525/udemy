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

int countnode(Trees<int>* root){  //counting nodes
    if(root == NULL) return 0;
    int ans=1;
    for(int i =0;i<root->children.size();i++){
        ans+=countnode(root->children[i]);
    }
    return ans;
}

int height(Trees<int>* root){
    if(root == 0) return 0;
    int mx=0;
    for(int i=0;i<root->children.size();i++){
        // int secoundMX = height(root->children[i]);
        // if(secoundMX>mx){
        //     mx=secoundMX;
        // }

        //recurtion
        mx=max(mx,height(root->children[i]));
    }
    return mx+1;
}

void PrintKlevel(Trees<int>* root ,int k){
if(root == NULL){
    return ;
}
if(k == 0){
    cout<< root->data << endl;
}
for(int i =0;i<root->children.size();i++){
    PrintKlevel(root->children[i],k-1);
}

}

int countleaf(Trees<int>* root){
    int ans=0;
    if(root->children.size() == 0){
        return 1;
    }
    for(int i =0;i<root->children.size();i++){
        ans += countleaf(root->children[i]);
    }
    return ans;
}

void current_depth(Trees<int>* root ,int k , int c=0){
    if(root == NULL){
        return ;
    }

    if(k==c){
        cout<<root->data<<" "<<endl;
    }

    for(int i=0;i<root->children.size();i++){
        current_depth(root->children[i],k,c+1);
    }
}

void pre_order(Trees<int>* root){
    if(root == NULL)
    {return;}
    cout<<root->data<<" "<<endl;
    for(int i=0;i<root->children.size();i++){
        pre_order(root->children[i]);
    }

}

void post_order(Trees<int>* root){
    if(root == NULL)
    {return;}
    for(int i=0;i<root->children.size();i++){
        pre_order(root->children[i]);
    }
    cout<<root->data<<" "<<endl;
}

void delete_tree(Trees<int>* root){
    if(root == NULL)
    {return;}
    for(int i=0;i<root->children.size();i++){
        pre_order(root->children[i]);
    }
    delete root;
}

int main(){

    Trees<int>* root = levelInpput();
    // P_L_wise(root);
    cout<<endl;
    cout << countnode(root)<<endl;
    cout<<endl;
    cout << height(root);
    cout<<endl;
    PrintKlevel(root,3);
    cout<<endl;
    cout<<countleaf(root)<<"hi"<<endl;
cout<<endl;
current_depth(root,2);
cout<<endl;
pre_order(root);
cout<<endl;
post_order(root);
cout<<endl;
delete_tree(root);
    return 0;
}