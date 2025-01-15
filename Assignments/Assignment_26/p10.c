#include<stdio.h>

int isPalindrome(int num){

        int sum=0,temp;
        temp=num;
        while(temp>0){

                sum=(sum*10)+(temp%10);
                temp/=10;
        }if(sum==num){

                return 1;
        }else{return 0;}
}

int isStrong(int num){

        int sum=0,temp,dig;
        temp=num;
        while(temp>0){

                int fact=1;
                dig=temp%10;
                for(int i=2;i<=dig;i++){

                        fact*=i;
                }sum+=fact;
                temp/=10;
        }if(sum==num){

                return 1;
        }else{return 0;}
}
void main(){

        int size,correct=1;
        printf("Enter the size of array:\n");
        scanf("%d",&size);
        while(correct){

                if((size%2==0)||(size<=0)||(size>10)){

                        printf("Invalid input!\nRenter positive odd integer (1 to 10): \n");
                        scanf("%d",&size);
                }else{correct=0;}
        }
        int arr[size];
        printf("Enter the array elements:\n");
        for(int i=0;i<size;i++){

                scanf("%d",&arr[i]);
        }for(int i=0;i<size;i++){

                if(isStrong(arr[i])){

                        printf("%d is a strong number:\n",arr[i]);
                }else if(isPalindrome(arr[i])){

                        printf("%d is a palindrome number:\n",arr[i]);
                }else{

                        if(arr[i]%2==0){

                                printf("%d is an even number:\n",arr[i]);
                        }else{

                                printf("%d is an odd number:\n",arr[i]);
                        }
                }
        }
}