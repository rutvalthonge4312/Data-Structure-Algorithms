/*
def LargeSmallSum(arr)

The function accepts an integers arr of size ’length’ as its arguments you are required to return the sum of second largest  element from the even positions and second smallest from the odd position of given ‘arr’

Assumption:

All array elements are unique
Treat the 0th position as even
NOTE

Return 0 if array is empty
Return 0, if array length is 3 or less than 3
Example

Input

arr:3 2 1 7 5 4

Output

7

Explanation

Second largest among even position elements(1 3 5) is 3
Second smallest among odd position element is 4
Thus output is 3+4 = 7
Sample Input

arr:1 8 0 2 3 5 6

Sample Output

8

*/

#include<stdio.h>

int secondSmaller(int arr [],int size){
    int evenBigger=arr[0];
    int evenBiggerPrev=arr[0];
    int oddBigger=arr[1];
    int oddBiggerPrev=arr[1];
    for(int i=0;i<size;i++){
        if(i%2==0){
            
            for(int j=i;j<size;j++){
                if(j%2==0){
                    if(arr[j]>evenBigger){
                        evenBiggerPrev=evenBigger;
                        evenBigger=arr[j];
                    }
                }
                else{
                    continue;
                }
            }
        }
        else{
           
            for(int j=i;j<size;j++){
                if(j%2!=0){
                    if(arr[j]>evenBigger){
                        evenBiggerPrev=evenBigger;
                        evenBigger=arr[j];
                    }
                }
                else{
                    continue;
                }
            }
        }
    }
    return (evenBiggerPrev+oddBiggerPrev);
}

int main(){
    // 3 ,2, 1, 7, 5 ,4
    int arr[6]={3 ,2, 1, 7, 5 ,4};
    int res=secondSmaller(arr,6);
    printf("%d",res);
    return 0;
}