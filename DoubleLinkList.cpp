#include<iostream>

using namespace std;

struct node{
    int data;
    struct node *previous;
    struct node *next;
};
node *head = NULL;

node *CreateNewNode(int x){
    node *NewNode = new node [1];
    NewNode->data = x;
    NewNode->previous = NULL;
    NewNode->next = NULL;
    return NewNode;
}

void InsertAtHead(int x){
    node *NewNode = CreateNewNode(x);
    NewNode->previous = NULL;
    NewNode->next = head;
    head = NewNode;
}

void InsertAtTail(int x){
    if(head==NULL){
        InsertAtHead(x);
        return;
    }
    node *NewNode = CreateNewNode(x);
    node *temp =head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = NewNode;
    NewNode->previous = temp;
    NewNode->next = NULL;
}

void InsertAtAny(int x,int pos){
    if(pos == 0){
        InsertAtHead(x);
        return;
    }
    else{
        node *NewNode = CreateNewNode(x);
        node *preTemp;
        node *temp =head;
        int countItem = 1;
        while(countItem != pos){
            preTemp = temp;
            temp = temp->next;
            countItem++;
        }
        NewNode->previous = preTemp;
        NewNode->next = temp;
        preTemp->next = NewNode;
        temp->previous = NewNode;
    }
}
void DeleteAtHead(){
    head = head->next;
    head->previous=NULL;
}
void DeleteAtTail(){
    if (head->next == NULL) {
        delete head;
        head = NULL;
    }else{
        node *preTemp = head;
        node *temp =head->next;
        while(temp->next!=NULL){
            preTemp = temp;
            temp = temp->next;
        }
        delete temp;
        preTemp->next = NULL;
    }
}
void DeleteAtAny(int pos){
    node *pre_temp =head;
    node *temp =head->next;
    for(int i = 1; i<pos;i++){
        pre_temp = temp;
        temp = temp->next;
    }
    pre_temp->next = temp->next;
    delete temp;

}

void TraversalForward(){
    node *temp = head;
    do{
        cout<<"Value: "<<temp->data<<endl;
        temp = temp->next;
    }while(temp !=NULL);
}

void TraversalBackword(){
    node *temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    do{
        cout<<"Value: "<<temp->data<<endl;
        temp = temp->previous;
    }while(temp!= NULL);
}

int main(){
    InsertAtHead(1);
    InsertAtTail(12);
    InsertAtAny(21,0);
    InsertAtAny(31,3);
    DeleteAtHead();
    DeleteAtTail();
    DeleteAtAny(1);
    TraversalForward();
    TraversalBackword();
    return 0;
}
