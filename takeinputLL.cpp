#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node * next;
    
    //parameterised contructor
    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void print(node * head){
    node * temp = head;
    while(temp!=NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    return;
}

node* takeinput(){
    int data;
    cin>>data;
    node *head = NULL;
    node *tail = NULL;
    while(data!=-1){
        node *newnode = new node(data);
        if(head==NULL){
            head = newnode;
            tail = newnode;
        }else{
            tail->next=newnode;
            tail=newnode;
        }
        cin>>data;
    }
    return head;
}

int main()
{
    node*head = takeinput();
    print(head);

    return 0;
}
