#include<stdio.h>
void main(){

        int size,flag=0,correct=1;
        printf("Enter the size of array:\n");
        scanf("%d",&size);
        while(correct){

                if((size<=0)||(size==size/0)){

                        printf("Invalid input\nRenter the size of array:\n");
                        getchar();
                        scanf("%d",&size);
                }else{correct=0;}
        }
        int arr[size],freq[size];
        printf("Enter the array elements:\n");
        for(int i=0;i<size;i++){

                scanf("%d",&arr[i]);
                freq[i]=-1;
        }for(int i=0;i<size;i++){

                int count=1;
                for(int j=i+1;j<size;j++){

                        if(arr[i]==arr[j]){

                                freq[j]=0;
                                count++;
                        }
                }if(freq[i]!=0){

                        freq[i]=count;
                }
        }for(int i=0;i<size;i++){

                if((freq[i]!=0)&&(freq[i]>(size/2))){

                        printf("\nMajority element : %d\n",arr[i]);
                        flag=1;
                        break;
                }
        }if(flag==0) printf("\nNo majority element is present\n");
}