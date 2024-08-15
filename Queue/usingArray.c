#include<stdio.h>
#include<stdlib.h>
struct Queue{ //Creating Queue ADT
    int rare;
    int front;
    int *arr;
    int size;
};

struct Queue*initialQueueSetup(struct Queue*initial,int size){
    initial->rare=-1;
    initial->front=-1;
    initial->size=size;
    initial->arr=(int *)malloc(size*sizeof(int));
    return initial;
}
int isEmpty(struct Queue*initial){
    if(initial->rare == initial->front){
        initial->rare=-1;
        initial->front=-1;
        return 1;
    }
    return 0;
}
int isFull(struct Queue*initial){ //Is Queue Full
    if(initial->rare>=initial->size){
        return 1;
    }
    return 0;
}

void enqueue(struct Queue*initial,int data){ //Add at the rare
    if(isFull(initial)){
        printf("Queue Was Full");
        return;
    }
    initial->rare++; //Increase the rare pointer
    initial->arr[initial->rare]=data;
}
void dequeue(struct Queue*initial){ //Remove at the front
    if(isEmpty(initial)){
        printf("Nothing to pop!");
        return;    
    }
    initial->front++;
}
void display(struct Queue*initial){ //Displaying Queue
    for(int i=initial->front+1;i<=initial->rare;i++){
        printf("| %d |",initial->arr[i]);
    }
}
int main(){
    struct Queue*initial;
    initial=initialQueueSetup(initial,50);
    enqueue(initial,12);
    enqueue(initial,56);
    enqueue(initial,10);
    enqueue(initial,45);
    dequeue(initial);
    display(initial);
    return 0;
}