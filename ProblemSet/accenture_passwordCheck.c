/*
int CheckPassword(char str[], int n);
The function accepts string str of size n as an argument. Implement the function which returns 1 if given string str is valid password else 0.
str is a valid password if it satisfies the below conditions.

– At least 4 characters
– At least one numeric digit
– At Least one Capital Letter
– Must not have space or slash (/)
– Starting character must not be a number
*/

#include<stdio.h>

int CheckPassword(char str[], int n){
    if(n<4){
        return 0;
    }
    if(str[0]>=48 && str[0]<=57){
        return 0;
    }
    int checkNumericValidation=0;
    int checkCapitalValidation=0;

    for(int i=0;i<n;i++){
        if(&str[i]=="\n" || &str[i]=="\0"){
            return 0;
        }
        {       
            if(str[i]>=48 && str[i]<=57){
                checkNumericValidation=1;
            }
            else if(str[i]>=65 && str[i]<=90){
                checkCapitalValidation=1;
            }
        }
    }
    if(checkNumericValidation && checkCapitalValidation){
        return 1;
    }
    return 0;
}

int main(){
    char password[7]={'a','a','s','s','w','A','1'};
    int check=CheckPassword(password,7);
    if(check){
        printf("Correct Password Format!");
    }
    else{
        printf("Incorrect Password Format!");
    }
    return 0;
}