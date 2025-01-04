#include<stdio.h>

int isprime(int num){

        for(int i=2;i<=(num/2);i++){

                if(num%i==0)return 0;
        }return 1;
}
void main(){

        int row,num;
        printf("Enter the no of rows : \n");
        scanf("%d",&row);
        if(row%2==0){

                num=2;
        }else{

                num=1;
        }
        for(int i=1;i<=row;i++){

                for(int j=1;j<=row;j++){

                        while(!isprime(num)){

                                num++;
                        }printf("%d\t",num);
                        num++;
                }printf("\n\n");
        }
}
