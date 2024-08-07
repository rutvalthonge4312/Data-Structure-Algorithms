#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
    struct Node*prev;
};

struct Node* createNewNode(int data){  //Creating New Node
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->next=NULL;
    newNode->prev=NULL;
    newNode->data=data;
    return newNode;
}
void display(struct Node*head){  //Displaying the linked list
    struct Node*ptr=head;
    while(ptr!=NULL){
        printf("<-| %d |->",ptr->data);
        ptr=ptr->next;
    }
}
int sizeOfLinkedList(struct Node*head){  //For retrieving size of linked list
    struct Node*ptr=head;
    int i=1;
    while(ptr!=NULL){
        ptr=ptr->next;
        i++;
    }
    return i;
}
struct Node*insertAtFirst(struct Node*head,int data){ //Insert Node at First 
    struct Node*newNode=createNewNode(data);
    newNode->next=head;
    head->prev=newNode;
    return newNode;
}
struct Node*insertAtLast(struct Node*head,int data){ //Insert Node at Last 
    struct Node*newNode=createNewNode(data);
    struct Node*ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=newNode;
    newNode->prev=ptr;
    return head;
}
struct Node*insertAtIndex(struct Node*head,int data,int index){  //Insert Node at perticular index 
    if(index==0){
        return insertAtFirst(head,data);
    }
    else{
        if(index >= sizeOfLinkedList(head)){
            printf("Can Not Insert the element , it was out of bound!");
            return head;
        }
        else if(index==sizeOfLinkedList(head)-1){
            return insertAtLast(head,data);
        }
    }
    struct Node*ptr=head;
    struct Node*newNode=createNewNode(data);
    for(int i=0;i<(index-1);i++){
        ptr=ptr->next;
    }
    newNode->next=(ptr->next);
    ptr->next->prev=newNode;
    ptr->next=newNode;
    newNode->prev=ptr;
    
    return head;
}

struct Node*deleteAtIndex(struct Node*head,int index){  //Delete at perticular index
    struct Node*ptr=head;
    for(int i=0;i<index-1;i++){
        ptr=ptr->next;
    }
    struct Node* nextNode=(ptr->next)->next;
    struct Node* removedNode=ptr->next;
    ptr->next=nextNode;
    nextNode->prev=ptr;
    removedNode->next=NULL;
    removedNode->prev=NULL;
    return head;
}
struct Node*deleteAtFirst(struct Node*head){ //Delete at first
    struct Node*ptr=head->next;
    ptr->prev=NULL;
    head->next=NULL;
    return ptr;
}
struct Node*deleteAtLast(struct Node*head){ //Delete at last
    struct Node*ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    struct Node*previsousNode=ptr->prev;
    previsousNode->next=NULL;
    ptr->prev=NULL;
    return head;
}

int main(){
    struct Node*head=createNewNode(45);
    head=insertAtFirst(head,14);
    head=insertAtLast(head,25);
    head=insertAtIndex(head,18,1);
    display(head);
    printf("\n");
    head=deleteAtIndex(head,1);
    display(head);
    return 0;
}