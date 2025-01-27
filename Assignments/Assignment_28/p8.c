#include<stdio.h>

int isDigit(int size,char arr[size]){

        int index=0;//flag=0;
        while(arr[index]!='\0'){

                if((arr[index]>=48)&&(arr[index]<=57)){

                        //flag=1;
                }else{return 0;}
                index++;
        }return 1;
}

void main(){

        int size=1,index=0;
        char ch,arr[size];
        printf("Enter a string:\n");
        while((ch=getchar())!='\n'){

                arr[index]=ch;
                index++;
                size++;
        }arr[index]='\0';
        if(isDigit(size,arr)){

                printf("String is made of only digits\n");
        }else{printf("String contains alphabets\n");}
}
