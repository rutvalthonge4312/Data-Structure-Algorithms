#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*next;
};

struct Node*createNewNode(int data){
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->next=NULL;
    newNode->data=data;
    return newNode;
}

struct Node*push(struct Node*top,int data){
    struct Node*newNode=createNewNode(data);
    if(top==NULL){
        return top;
    }
    newNode->next=top;
    return newNode;
}

struct Node*pop(struct Node*top){
    struct Node*returnNode=top->next;
    top->next=NULL;
    return returnNode;
}
int isEmpty(struct Node*top){
    if(top==NULL){
        return 1;
    }
    return 0;
}
int isFull(int data){
    struct Node*newNode=createNewNode(data);
    if(newNode==NULL){
        return 1;
    }
    return 0;
}
void display(struct  Node*top){
    struct Node*ptr=top;
    while(ptr!=NULL){
        printf("| %d |",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    struct Node*top=createNewNode(12);
    top=push(top,25);
    top=push(top,43);
    top=pop(top);
    display(top);
    return 0;
}