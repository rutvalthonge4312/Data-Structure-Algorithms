/*

char*MoveHyphen(char str[],int n);

The function accepts a string “str” of length ‘n’, that contains alphabets and hyphens (-). Implement the function to move all hyphens(-) in the string to the front of the given string.

NOTE:- Return null if str is null.

Example :-

Input:
str.Move-Hyphens-to-Front
Output:
—MoveHyphenstoFront
Explanation:-

The string “Move-Hyphens -to-front” has 3 hyphens (-), which are moved to the front of the string, this output is “— MoveHyphen”

Sample Input

Str: String-Compare
Sample Output-

-StringCompare

*/

#include<stdio.h>
#include<stdlib.h>

char *MoveHyphen(char str[],int n){
    int updatedSize=n;
    int isSwappingDone=0;
    char temp;
    for(int i=0;i<n;i++){
        if(str[i]=='-'){    
            if(!isSwappingDone){
                for(int j=i;j>0;j--){
                    temp=str[j];
                    str[j]=str[j-1];
                    str[j-1]=temp;
                }
                isSwappingDone=1;
            }
            for(int j=i;j<updatedSize;j++){
                str[j]=str[j+1];
            }      
            updatedSize--;
        }
    }

    return str;
}

int main(){
    char str[21]={'M', 'o', 'v', 'e', 'a', 'H' ,'y', 'p', 'h', 'e', 'n', 's' ,'-' ,'t', 'o', '-', 'F' ,'r', 'o', 'n', 't' };
    char*newArr=MoveHyphen(str,21);
    printf("%s",newArr);
}