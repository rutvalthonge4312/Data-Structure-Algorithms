#include<stdio.h>

void display(int*arr,int size){
    printf("Displaying Array:\n");
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
}
//Insert Function
void insert(int*arr,int index,int number,int size){
    printf("Inserting Elelment");
    for(int i=(size-1);i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=number;
}

//Deletion Function
void delete(int*arr,int index,int size){
    for(int i=index;i<size;i++){
        arr[index]=arr[index+1];
    }
}


int main(){
    int arr[100]={1,4,5,7};
    printf("Before \n");

    //Insertion Calling
    insert(arr,1,454,4);

    printf("\nAfter Insertion\n");
    display(arr,5);

    //Deletion Calling
    delete(arr,2,5);
    printf("After Deletion");
    display(arr,4);
    return 0;
}