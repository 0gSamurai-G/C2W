#include<stdio.h>
void main(){

        int size;
        printf("Enter the size of an array : \n");
        scanf("%d",&size);
        float arr[size];
        for(int i=0;i<size;i++){

                printf("Enter the height of student %d: ",i+1);
                scanf("%f",&arr[i]);
                while(((arr[i])>6) || ((arr[i])<5.5)){
                        printf("Enter the correct height of student %d: ",i+1);
                        scanf("%f",&arr[i]);

                }
        }
        for(int i=0;i<size;i++){

                printf("Height of student %d: %f\n",i+1,arr[i]);
        }
}
