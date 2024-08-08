#include<stdio.h>

int primeNumber(int start,int end,int primeNumberArray[]){
    
    int arrIndex=0;
    for(int number=start;number<=end;number++){
        if(number==1){
            continue;
        }
        if(number==2){
            primeNumberArray[arrIndex]=number;
            arrIndex++;
        }
        
        else{
            int flage=1;
            for(int i=2;i<number;i++){
                if(number%i==0){
                    flage=0;
                    break;
                }
            }
            if(flage==1){
                primeNumberArray[arrIndex]=number;
                arrIndex++;
            }
        }
    }
    return arrIndex;
    
}
void display(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d,",arr[i]);
    }
}

int main(){
    int start=10;
    int end=100000;
    int arrSize=(end-start);
    int primeNumberArray[arrSize];
    arrSize=primeNumber(start,end,primeNumberArray);
    display(primeNumberArray,arrSize);
    return 0;
}