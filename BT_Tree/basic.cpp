#include<iostream>
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
    BTTree<int>* leftChild = takeinput();
    BTTree<int>* rightChild= takeinput();

    root->left = leftChild;
    root->right = rightChild;

    return root;
}

int main(){
    BTTree<int>* root = takeinput();
    // BTTree<int>* root = new BTTree<int>(100);
//     BTTree<int>* n1 = new BTTree<int>(200);
//     BTTree<int>* n2 = new BTTree<int>(300);

// root->left = n1;
// root->right = n2;

print_BT(root);



    return 0;
}