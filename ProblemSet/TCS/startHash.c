/*
Problem Statement – Given a string S(input consisting) of ‘*’ and ‘#’. The length of the string is variable. The task is to find the minimum number of ‘*’ or ‘#’ to make it a valid string. The string is considered valid if the number of ‘*’ and ‘#’ are equal. The ‘*’ and ‘#’ can be at any position in the string.
Note : The output will be a positive or negative integer based on number of ‘*’ and ‘#’ in the input string.

(*>#): positive integer
(#>*): negative integer
(#=*): 0
Example 1:
Input 1:

###***   -> Value of S
Output :

0   → number of * and # are equal
*/
#include<stdio.h>

int checkValideString(char*str,int length){
    int chekHashCount=0,checkStarCount=0;
    for(int i=0;i<length;i++){
        if(str[i]=='#'){
            chekHashCount++;
        }
        else{
            checkStarCount++;
        }
    }
    if(checkStarCount==chekHashCount){
        return 0;
    }
    else if(checkStarCount>chekHashCount){
        return 1;
    }
    return -1;
}

int main(){
    char*str="***###*";
    int length=sizeof(str)/sizeof(char);
    int check=checkValideString(str,length);
    printf("%d",check);
    return 0;
}