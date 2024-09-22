/*
A Cloth merchant has some pieces of cloth of different lengths. He has an order of curtains of length of 12 feet. He has to find how many curtains can  be made from these pieces. Length of pieces of cloth is recorded in feet.

Note : You are expected to write code in the findTotalCurtains function only which receive the first parameter as the number of items in the array and second parameter as the array itself. You are not required to take the input from the console.

Example

Finding the total curtains from a list of 5 cloth pieces.

Input   
input 1 : 5
input 2 : 3 42 60 6 14

Output
9

Explanation
The first parameter 5 is the size of the array. Next is an array of measurements in feet. The total number of curtains is 5 which is calculated as under

3 -> 0
42 -> 3
60 -> 5
6 -> 0
14 -> 1
total = 9
*/
#include<stdio.h>

int findTotalCurtains(int n, int arr[]){
    int total=0;
    int temp=0;
    for(int i=0;i<n;i++){
        temp=(arr[i]/12);
        total=total+temp;
    }
    return total;
}
int main(){
    int arr[5]={ 3 ,42 ,60, 6, 14};
    int ans=findTotalCurtains(5,arr);
    printf("Ans is %d",ans);
    return 0;
}