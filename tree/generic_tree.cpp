#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Trees{
    public:
T data;
vector<Trees<T>*> child;

Trees(T data){
    this->data= data;
}

};

void print_tree(Trees<int>* root){
    cout<<root->data<<" : ";

    for(int i =0;i<root->child.size();i++){
        cout<<root->child[i]->data<<",";
    }

    cout<<endl;
    
    for(int i =0;i<root->child.size();i++){
        print_tree(root->child[i]);
    }
}

int main(){
    Trees<int>* root = new Trees<int> (10);
    Trees<int>* ch1 = new Trees<int> (220);
    Trees<int>* ch2 = new Trees<int> (220);
    Trees<int>* ch3 = new Trees<int> (12330);
    Trees<int>* ch4 = new Trees<int> (12330);
    Trees<int>* ch5 = new Trees<int> (12330);
    Trees<int>* ch6 = new Trees<int> (12330);

root->child.push_back(ch1);
root->child.push_back(ch2);
ch2->child.push_back(ch3);
ch2->child.push_back(ch4);
ch2->child.push_back(ch5);
ch2->child.push_back(ch6);
   print_tree(root);

cout<<"successfull"<<endl;
    return 0;
}