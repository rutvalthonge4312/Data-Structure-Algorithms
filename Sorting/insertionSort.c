#include<stdio.h>
void insertionSort(int arr[],int size){
    int temp;
    for(int i=0;i<size;i++){ ///Pass Creation
        for(int j=i;j>=0;j--){ //Swapping
            if(arr[i]<arr[j]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }   
}
void display(int arr[],int size){ //Display the Array values
    for(int i=0;i<size-1;i++){
        printf("%d,",arr[i]);
    }v
}
int main(){
    int arr[8]={22,3,12,34,44,5,45,74};
    insertionSort(arr,8);
    display(arr,8);
    return 0;
}