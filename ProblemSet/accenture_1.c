/*
The function accepts two positive integers ‘r’ and ‘unit’ and a positive integer array ‘arr’ of size ‘n’ as its argument ‘r’ represents the number of rats present in an area, ‘unit’ is the amount of food each rat consumes and each ith element of array ‘arr’ represents the amount of food present in ‘i+1’ house number, where 0 <= i
*/

#include<stdio.h>

int calculateRatCusuption(int arr[],int r,int unit,int arrSize){
    if(arrSize==0){
        return -1;
    }
    int availabelRatRequrement=0;
    int overAllRatRequirement=(r*unit);
    for(int i=0;i<arrSize;i++){
        availabelRatRequrement=availabelRatRequrement+arr[i];
    }
    if(availabelRatRequrement>overAllRatRequirement){
        return (availabelRatRequrement-overAllRatRequirement);
    }
    else{
        return -1;
    }

}

int main(){
    int houseStorage[7]={2,3,4,5,6,7,8};
    int r=5;
    int unit=12;
    int check=calculateRatCusuption(houseStorage,r,unit,7);
    if(check==-1){
        printf("Insufficient Food for rat");
    }
    else if(check>=0){
        printf("Sufficient Food for rat , food left in house : %d",check);
    }
    return 0;
}