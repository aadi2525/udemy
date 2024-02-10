#include<iostream>
using namespace std;

class node
{

public:
int data;
node *next;

node(int data){
    this->data=data;
    next=NULL;
}
 
};


//display the output


void print(node *head){
    node *temp= head;
    while(temp!=NULL){
        cout<<temp->data<< " ";
       temp= temp->next;
    }
    cout<<"NULL";
}

//taking a input 

node *takeinput(){
    int data;
    cin>>data;

    node *head=NULL;
    node *tail=NULL;

    while(data!=-1){
    node *n=new node(data);
    if(head==NULL){
        head=n;
        tail=n;
    }else
    {
        tail->next=n; 
        tail=n;

    }
    cin>>data;
}
return head;
}

//lenth of the LL

int length(node *head){
    node *temp =head;
        int count =0;
    while(head!=NULL){
        
        count++;
       head= head->next;

    }
   

    return count;
}

//printing ith term

void printIthterm(node *head,int i){

    int count=1;
    int n=length(head);
    if(i<0 || i>n-1){
        cout<<" -1"<<endl;
        return;
    }
    while(count<=i){
    for(int j=1;j<=i;j++){
        head=head->next;
        count++;
        }
        cout<<head->data<<" ";
    }

}


int main(){
    node *x=takeinput();
    // print(x);
//    cout<< length(x);
  printIthterm(x,2);

    return 0;
}