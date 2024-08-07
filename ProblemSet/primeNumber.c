#include<stdio.h>

int primeNumber(int number){
    int flage=1;
    if(number==1){
        return 0;
    }
    else if(number==2){
        return 1;
    }
    else{
        for(int i=2;i<number;i++){
            if(number%i==0){
                flage=0;
                break;
            }
        }
        if(flage==1){
            return 1;
        }
        else{
            return 0;
        }
    }
}

int main(){
    int number=23;
    int check=primeNumber(number);
    if(check){
        printf("Number was prime.");
    }
    else{
        printf("Number was not prime.");
    }
    return 0;
}