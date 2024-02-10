git //linked list is like a multiple arrays which stores a data sequencly.
//its like array of size 2 in first in keep the data and in 2nd it keep the address of secound node(array)
// ..so it gets easy ro store and seqncely



#include<iostream>
using namespace std;

class node            //created a class name node
{
public:     

int data;        
node *next;

node(int data){

    this->data=data;
     // The 'this' pointer is used to retrieve the object's data
       // hidden by the local variable 'data'
    next =NULL;

}

};

/*
int main(){

    node n1(1);   
    node n2(2);

    n1.next=&n2;        //int this it stores the adderss of secound node 
                        //it will not give null it gives 2nd node data .

    cout<<n1.data<<" "<<n2.data<<endl;

    node *head =&n1;       //in this line we created a head poinnter which stores the address of n1;
    cout<<head->data;        // *head.data == head->data


    return 0;
}*/

/*
void print(node *head){         //in this fuction problem is the if u want to repeat the output it will give NULL
                                ///because of head is Null at last
    while(head!=NULL){
    cout<<head->data<<" ";
   head = head->next;
   }

}*/

//to overcome this problem we can use temparary variable so the value of head will not change and we ca use head again

void print(node *head){         //in this fuction problem is the if u want to repeat the output it will give NULL
    node *temp=head;                   ///because of head is Null at last
    while(temp!=NULL){
    cout<<temp->data<<" ";
   temp = temp->next;
   }

   cout<<endl;
                                 //by using temp we can print again 
    while(head!=NULL){          //here we can use another variable insted of Head
    cout<<head->data<<" ";
   head = head->next;
   }

}


int main(){

    node n1(1);   
    node *head =&n1;  
    
      
    node n2(2);
    node n3(3);
    node n4(4);
    node n5(5);

    n1.next=&n2;       
    n2.next=&n3;       
    n3.next=&n4;       
    n4.next=&n5; 


  print(head);        // *head.data == head->data




    return 0;
}