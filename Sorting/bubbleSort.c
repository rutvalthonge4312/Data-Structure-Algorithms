#include<stdio.h>
void bubbleSort(int arr[],int size){
    int updatedSize=size-1;
    int temp;
    for(int i=0;i<(size-1);i++){ //Pass Started!
        for(int j=0;j<updatedSize;j++){ //Checking Values fpor each pass
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        updatedSize--;//Reduce the last index for comparision for optimization
    }   
}
void display(int arr[],int size){ //Display the Array values
    for(int i=0;i<size-1;i++){
        printf("%d,",arr[i]);
    }
}
int main(){
    int arr[8]={22,3,12,34,44,5,45,74};
    bubbleSort(arr,8);
    display(arr,8);
    return 0;
}