#include<stdio.h>
void main(){

        int size;
        printf("Enter the size: \n");
        scanf("%d",&size);
        char arr[size];
        for(int i=0;i<size;i++){
                getchar();

                printf("Enter the element :");
                scanf("%c",&arr[i]);

        }
        for(int i=0;i<size;i++){

                if(i%2==0){

                        printf("%c\n",arr[i]);
                }
        }
}
