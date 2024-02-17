#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Trees{
    public:
    T data;
    vector<Trees<T>*> children;

    Trees(T data){
        this->data=data;
    }
};

void pprint(Trees<int>* root){
    cout<<root->data<<": ";

    for(int i =0 ;i<root->children.size();i++){
        cout<<root->children[i]->data<<" , ";
    }
    cout<<endl;
    for(int i =0;i<root->children.size();i++){
      pprint( root->children[i]);
    }
}

Trees<int>* takeinput(){
    int rootdata;
    cout<<"enter"<< " ," << endl;
    cin>>rootdata;

    Trees<int>* rootdt = new Trees<int>(rootdata);
    cout<<"enter childrens of " << rootdata << ", "<<endl;
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        Trees<int>* child = takeinput();
        rootdt->children.push_back(child);

    }
return rootdt;

}

int main(){

    Trees<int>* root = takeinput();
    // Trees<int>* ch1 = new Trees<int>(100);

    
    pprint(root);

    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;

// template<typename T>
// class Tress{
//     public:
//     T data;
//     vector<Tress<T>*>children;

//     Tress(T data){
//         this->data=data;
//     }

// };

// void pprint(Tress<int>* root){
//     if(root==NULL) {return; }

// cout<<root->data<<" : ";
// for(int i=0;i<root->children.size();i++){
//     cout<<root->children[i]->data<< ", ";
// }
// cout<<endl;

// for(int i =0;i<root->children.size();i++){
//     pprint(root->children[i]);
// }
// }

// Tress<int>* takeInput(){
//     int rootdata;
//        cout<<"Enter "<<endl;
//     cin>>rootdata;
//     Tress<int>* rootdt = new Tress<int>(rootdata);

//        int n;
//        cout<<"Enter children of " << rootdata << endl;
//        cin>>n;
//        for(int i=1;i<=n;i++){
//         Tress<int>* child = takeInput();
//         rootdt->children.push_back(child);
//        }
//        return rootdt;
// }


// int main(){
//     // Tress<int>* root = new Tress<int>(100);
//    Tress<int>* root = takeInput();
//     pprint(root);

//     return 0;
// }