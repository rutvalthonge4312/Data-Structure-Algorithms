#include<stdio.h>
//nalayk rutval
void reverseWord(char word[],int size){
    //sizeof(word)/sizeof(char)
    char newWord[size];
    int j=0;
    for(int i=(size-1);i>=0;i--){
        // printf("%s\n",word[i]);
        newWord[j]=word[i];
        j++;
    }
    printf("Reversed Word was: %s",newWord);
    // for(int i=0;i<size;i++){
    //     printf
    // }
}
int stringLen(char *str)
{
    int length = 0;
  
    // Loop till the NULL character is found
    while (*str != '\0')
    {
        length++;

        // Move to the next character
        str++;
    }
    return length;
}
int main(){
    char word[15];
    printf("Enter the Word:");
    scanf("%s",word);
    int size=stringLen(word);
    // printf("%d",size);
    reverseWord(word,size);
    return 0;
}