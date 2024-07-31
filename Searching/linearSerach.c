#include<stdio.h>

int linearSearch(int * arr,int number,int size){
    for(int i=0;i<size;i++){
        if(arr[i]==number){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[50]={1,4,6,7,8};
    int arrIndex=linearSearch(arr,6,5);
    if(arrIndex==-1){
        printf("%s","Number Was Not Found!");
    }
    else{
       printf("Number Found at %d index!",arrIndex); 
    }
    return 0;
}