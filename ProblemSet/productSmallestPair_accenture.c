/*
Implement the following Function

def ProductSmallestPair(sum, arr)

The function accepts an integers sum and an integer array arr of size n. Implement the function to find the pair, (arr[j], arr[k]) where j!=k, Such that arr[j] and arr[k] are the least two elements of array (arr[j] + arr[k] <= sum) and return the product of element of this pair

NOTE

Return -1 if array is empty or if n<2
Return 0, if no such pairs found
All computed values lie within integer range
Example

Input

sum:9

size of Arr = 7

Arr:5 2 4 3 9 7 1

Output

2

Explanation

Pair of least two element is (2, 1) 2 + 1 = 3 < 9, Product of (2, 1) 2*1 = 2. Thus, output is 2

Sample Input

sum:4

size of Arr = 6

Arr:9 8 3 -7 3 9

Sample Output

-21

*/

#include<stdio.h>

int ProductSmallestPair(int arr[],int sum,int size){
    int updatedSize=size;
    int temp;
    int i;
    for(i=0;i<size;i++){
        for(int j=i;j<updatedSize;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
        }
        updatedSize--;
    }
  
    for(i=0;i<size;i++){
        if((arr[i]+arr[i+1])<= sum){
            return (arr[i]*arr[i+1]);
        }
    }
}

int main(){
    
    //5 ,2 ,4 ,3 ,9 ,7 ,1
    int arr[6]={9 ,8 ,3 ,-7, 3, 9};
    int sum=9;
    int product=ProductSmallestPair(arr,sum,6);
    printf("The Poduct Was: %d",product);
    return 0;
}