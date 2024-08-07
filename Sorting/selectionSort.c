#include<stdio.h>
void selectionSort(int arr[],int size){
    int smallest;
    int smallestIndex;
    int temp;
    for(int i=0;i<size;i++){
        smallest=arr[i];
        for(int j=i;j<size;j++){
            if(arr[j]<smallest){
                smallest=arr[j];
                smallestIndex=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[smallestIndex];
        arr[smallestIndex]=temp;
    }  
}
void display(int arr[],int size){ //Display the Array values
    for(int i=0;i<size-1;i++){
        printf("%d,",arr[i]);
    }
}
int main(){
    int arr[8]={22,3,12,34,44,5,45,74};
    selectionSort(arr,8);
    display(arr,8);
    return 0;
}