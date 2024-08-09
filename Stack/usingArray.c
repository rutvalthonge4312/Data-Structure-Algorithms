#include<stdio.h>
#include<stdlib.h>

struct Stack{
    int top;
    int size;
    int*arr;
};

struct Stack*creatStack(struct Stack*s1,int size,int top){
    s1->top=top;
    s1->size=size;
    s1->arr=(int *)malloc(size * (sizeof(int)));
    return s1;
}

int isEmpty(struct Stack*s1){
    if(s1->top==-1){
        return 1;
    }
    return 0;
}
int isFull(struct Stack*s1){
    if(s1->top==s1->size){
        return 1;
    }
    return 0;
}

int pop(struct Stack*s1){
    if(isEmpty(s1)==1){

        return -1;
    }
    int popedElement=s1->arr[s1->top];
    s1->top=s1->top-1;
    return popedElement;
}
int push(struct Stack*s1,int data){
    if(isFull(s1)==1){
        return -1;
    }
  
    s1->top=s1->top + 1;
    s1->arr[s1->top]=data;
    return 0;
}
void display(struct Stack*s1){
    for(int i=s1->top;i>=0;i--){
        printf("| %d |\n",s1->arr[i]);
        printf("______\n");
    }
}

int main(){
    struct Stack*s1;
    int pushSuccess;
    int check;
    s1==creatStack(s1,50,-1);
    check=push(s1,45);
    check=push(s1,11);
    check=push(s1,11);
    check=push(s1,11);
    check=push(s1,23);
    check=push(s1,41);
    check=push(s1,5);
    check=pop(s1);
    display(s1);
    return 0;
}