#include<stdio.h>
void main(){

        int size;
        char arr[size];
        printf("Enter the size of an array: \n");
        scanf("%d",&size);
        for(int i=0;i<size;i++){
                getchar();
                printf("Enter a character: \n");
                scanf("%c",&arr[i]);
        }
        for(int i=0;i<size;i++){
                printf("Ascii value of %c : %d\n",arr[i],arr[i]);
        }
}
