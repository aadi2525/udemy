#include<iostream>
#include<queue>
using namespace std;


template<typename T>
class BTTree{
    public:
T data;
BTTree* left;
BTTree* right;

 BTTree(T data){
    this->data = data;
    left=NULL;
    right=NULL;
 }

 ~BTTree(){
    delete left;
    delete right;
 }
};


void print_BT(BTTree<int>* root){
if(root == NULL){
    return ;
}

    cout<<root->data<<" ";
    if(root->left!=NULL){
        cout<<" L " << root->left->data;
    }
    if(root->right!= NULL){
        cout<<" R "<<root->right->data;
    }
    cout<<endl;
    
    print_BT(root->left);
    print_BT(root->right);

}

BTTree<int>* takeinput(){
    int rootdata;
    cout<<"enter data"<<endl;
    cin>>rootdata;
    if(rootdata==-1){
        return NULL;
    }
    BTTree<int>* root = new BTTree<int>(rootdata);
    root->left  = takeinput();
    root->right = takeinput();

    return root;
}

BTTree<int>* inputlevelwise(){
    int rootdata;
    cout<<"enter data"<<endl;
    cin>>rootdata;
   
    BTTree<int>* root = new BTTree<int> (rootdata);
    queue<BTTree<int>* > q;
    q.push(root);

    while(!q.empty()){
        BTTree<int>* f = q.front();
        q.pop();


        cout<<"enter left child"<<f->data<<endl;
        int leftchild;
        cin>>leftchild;
        if(leftchild!=-1){
            BTTree<int>* child = new BTTree<int> (leftchild);
            q.push(child);
            f->left=child;
        }

            cout<<"enter right child"<<f->data<<endl;
        int rightchild;
        cin>>rightchild;
        if(rightchild!=-1){
            BTTree<int>* child = new BTTree<int> (rightchild);
            q.push(child);
            f->right=child;
        }
    }
    return root;

}

//1 2 3 4 5 6 7 -1 - 1- 1 -1 8 9 -1 -1 -1 -1 -1 -1

int main(){
    BTTree<int>* root = inputlevelwise();
    // BTTree<int>* root = takeinput();
    // BTTree<int>* root = new BTTree<int>(100);
//     BTTree<int>* n1 = new BTTree<int>(200);
//     BTTree<int>* n2 = new BTTree<int>(300);

// root->left = n1;
// root->right = n2;

print_BT(root);




    return 0;
}