#include<stdio.h>
void main(){

        int num,count=0,count1=0;
        printf("Enter a number:\n");
        scanf("%d",&num);
        for(int i=1;i<=num;i++){

                if(num%i==0) count++;
        }int arr[count];
        printf("Array of factor of %d are;\n",num);
        for(int i=1;i<=num;i++){

                if(num%i==0){

                        arr[count1]=i;
                        printf("%d\n",arr[count1]);
                        count1++;
                }
        }
}
