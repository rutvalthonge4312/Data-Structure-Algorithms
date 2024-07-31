#include<stdio.h>

//Binary Search Function
int binarySearch(int * arr,int number,int size,int start,int end){
    while(start <= end){
        int mid=(start+end)/2; //Calculated Mid
        if(arr[mid]==number){
            return mid; //Return Number if Found
        }
        else{
            if(arr[mid]>number){
                end=mid-1;  //check for the start or end to be set to mid
            }
            else{
                start=mid+1;
            }
        }
    }
    return -1;  //Return -1 if number not found!
}

int main(){
    int arr[50]={1,4,6,7,8};
    int arrIndex=binarySearch(arr,1,5,0,4);
    if(arrIndex==-1){
        printf("%s","Number Was Not Found!");
    }
    else{
       printf("Number Found at %d index!",arrIndex); 
    }
    
    return 0;
}