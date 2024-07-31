#include<stdio.h>
#include<stdlib.h>

//Array ADT implementation 
struct arr{
    int totalSize;
    int usedSize;
    int *ptr;
};

//Array Creation
void createArray(struct arr *newArr,int size, int usedSize){
    newArr->usedSize=usedSize;
    newArr->totalSize=size;
    int * ptr=(int*)malloc(size*sizeof(int));
    newArr->ptr=ptr;
    if (newArr->ptr == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    printf("%s","Create Array ADT successfully!");
}

//show data
void showArray(struct arr *newArr,int usedSize){
    printf("%s","\nPrinting the values from Array...");
    for(int i=0;i<usedSize;i++){
        printf("%d\n",(newArr->ptr)[i]);
    }
}

//Enter data in array
void addDataArray(struct arr *newArr,int usedSize){
    printf("%s","Storing the values to Array...\n");
    for(int i=0;i<usedSize;i++){
        printf("%s","Enter Value:");
        scanf("%d",&(newArr->ptr)[i]); //Stroring Values in Array
    }
    printf("%s","Stroing completed...");
}
int main(){
    struct arr newArr;
    createArray(&newArr,100,10);

    addDataArray(&newArr,10);
    showArray(&newArr,10);

    
    return 0;
}