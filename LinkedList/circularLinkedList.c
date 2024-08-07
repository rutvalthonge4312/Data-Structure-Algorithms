#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*next;
};

struct Node* createNewNode(int data){
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=newNode;
}
void display(struct Node*head){
    struct Node*ptr=head;
    do{
        printf("| %d |->",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
}
int calculateSize(struct Node*head){
    struct Node*ptr=head;
    int size=0;
    while(ptr->next!=head){
        size++;
        ptr=ptr->next;
    }
    return size;
}
struct Node*insertAtFirst(struct Node*head,int data){
    struct Node*newNode=createNewNode(data);
    struct Node*ptr=head;
    if(head==NULL){
        return newNode;
    }
    else{
      while(ptr->next!=head){
        ptr=ptr->next;
      } 
      ptr->next=newNode;
      newNode->next=head;
    }
    return newNode;
}
struct Node*insertAtLast(struct Node*head,int data){
    struct Node*newNode=createNewNode(data);
    struct Node*ptr=head;
    while(ptr->next!=head){
        ptr=ptr->next;
    }
    ptr->next=newNode;
    newNode->next=head;
    return head;
}
struct Node*insertAtIndex(struct Node*head,int data,int index){
    struct Node*newNode=createNewNode(data);
    struct Node*ptr=head;
    int size=calculateSize(head);
    if(index==0){
        return insertAtFirst(head,data);
    }
    else if(index==size){
        return insertAtLast(head,data);
    }
    else if(index<size){
        for(int i=0;i<index-1;i++){
            ptr=ptr->next;
        }
        newNode->next=(ptr->next);
        ptr->next=newNode;
    }
    else{
        printf("List bound Exceed!\n");
        return head;
    }
    return head; 
}
int main(){
    struct Node*head=createNewNode(12);
    head=insertAtFirst(head,42);
    head=insertAtFirst(head,22);
    head=insertAtLast(head,23);
    head=insertAtFirst(head,32);
    head=insertAtIndex(head,52,3);
    display(head);
    return 0;
}