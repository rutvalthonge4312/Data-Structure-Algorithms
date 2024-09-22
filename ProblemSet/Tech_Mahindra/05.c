/*
 Calculate the total interest on loans for an array of amounts. However, till the amount of 2000, there is no interest applicable, but, there is a 20% interest applicable for the remaining amounts in the array.

In this case, we will be writing a calculate TotalInterest function that receives the first input as the number of amounts in the array and the second input as the array of amounts.

For instance, if there are 5 amounts with the first input as 5 and the amounts being 2000, 4000, 6000, 8000 and 10000.

The total sum would be = 20% of 4000 + 20% of 6000 + 20% of 8000 + 20% of 10000 = 5600 (as the 2000 will not be considered for interest)
*/

#include<stdio.h>

int TotalInterest(int n,int arr[]){
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=2000){
            continue;
        }
        else{
            sum=sum+((arr[i]*20)/100);
        }
    }
    return sum;
}

int main(){
    int arr[5]={2000, 4000, 6000, 8000 ,10000};
    int ans=TotalInterest(5,arr);
    printf("Ans is %d",ans);
    return 0;
}