#include <stdio.h>
#include <stdlib.h>


struct Node{
    int data;
    struct Node*next;
};

//Create A New Node
struct Node*creatNewNode(int data){
    struct Node*newNode=(struct Node *)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}

//Insert node at last
struct Node*insertNodeAtLast(int data,struct Node*head){
    struct Node*ptr=head;
    struct Node*newNode;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    newNode=creatNewNode(data);
    ptr->next=newNode;
    return head;
}
//Insert node at first
struct Node*insertNodeAtFirst(int data,struct Node*head){
    struct Node*newNode;
    newNode=creatNewNode(data);
    newNode->next=head;
    return newNode;
}


//Insert node at any Index 
struct Node*insertNodeAtIndex(int data,struct Node*head,int index){
    if(index==0){
        return insertNodeAtFirst(data,head);
    }
    struct Node*newNode;
    struct Node*ptr=head;
    struct Node*temp;
    newNode=creatNewNode(data);
    
    for(int i=0;i<index;i++){
        ptr=ptr->next;
    }
    temp=ptr->next;
    ptr->next=newNode;
    newNode->next=temp;
    return head;
}

struct Node*deleteNodeAtIndex(int data,struct Node*head,int index){
    
    struct Node*ptr=head;
    struct Node*temp;
    for(int i=0;i<index-1;i++){
        ptr=ptr->next;
    }
    temp=(ptr->next)->next;
    ptr->next=temp;
    return head;
}

//Display Link List
void display(struct Node*head){
    struct Node*ptr=head;
    while(ptr!=NULL){
        printf("| %d |->",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    struct Node* head=creatNewNode(45);

    head->next=NULL;
    head->data=45;
    head=insertNodeAtLast(124,head);
    head=insertNodeAtFirst(10,head);

    head=insertNodeAtIndex(445,head,0);
    display(head);
    return 0;
}