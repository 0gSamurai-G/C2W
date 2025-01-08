#include<stdio.h>
void main(){

        int size,num,correct=1,flag=1;
        printf("Enter the size of array;\n");
        scanf("%d",&size);
        while(correct){

                if((size<=0)||(size==size/0)){

                        printf("Invalid input!\nRenter the size of array:\n");
                        getchar();
                        scanf("%d",&size);
                }else{correct=0;}
        }
        int arr[size];
        printf("Enter the array elements:\n");
        for(int i=0;i<size;i++){

                scanf("%d",&arr[i]);
        }printf("Enter a number:\n");
        scanf("%d",&num);
        for(int i=0;i<size;i++){

                for(int j=i+1;j<size;j++){

                        if((arr[i]+arr[j])==num){

                                printf("Pair: %d %d\n",arr[i],arr[j]);
                                flag=0;
                        }
                }
        }if(flag==1) printf("No pair found\n");
}