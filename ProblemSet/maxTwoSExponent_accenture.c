/*

You are given a function,

Int MaxExponents (int a , int b);

You have to find and return the number between ‘a’ and ‘b’ ( range inclusive on both ends) which has the maximum exponent of 2.

The algorithm to find the number with maximum exponent of 2 between the given range is

Loop between ‘a’ and ‘b’. Let the looping variable be ‘i’.
Find the exponent (power) of 2 for each ‘i’ and store the number with maximum exponent of 2 so faqrd in a variable , let say ‘max’. Set ‘max’ to ‘i’ only if ‘i’ has more exponent of 2 than ‘max’.
Return ‘max’.
Assumption: a <b

Note: If two or more numbers in the range have the same exponents of  2 , return the small number.

Example

Input:
7
12
Output:
8
Explanation:

Exponents of 2 in:

7-0

8-3

9-0

10-1

11-0

12-2

Hence maximum exponent if two is of 8.

*/

#include<stdio.h>
#include<stdlib.h>

int count(int number){
    int index=0;
    while(number%2==0){
        number=number/2;
        index++;
    }
    if(number%2!=0){
        return 0;
    }
    return index;
}

int MaxExponents(int start , int end){
    int maxCount=0;
    int returnIndex=-1;
    int countData;
    for(int i=start;i<end;i++){
        countData=count(i);
        if(countData==0){
            continue;
        }
        else{
            if(maxCount<countData){
                maxCount=countData;
                returnIndex=i;
            }
        }
    }
    if(returnIndex ==  -1){
        return -1;
    }
    else{
        return returnIndex;
    }
    

}

int main(){
    int start=10;
    int end =13;
    int maxCount=MaxExponents(start,end);
    if(maxCount==-1){
        printf("No Power of 2 element found!");
    }
    else{
        printf("%d",maxCount);
    }
    
}