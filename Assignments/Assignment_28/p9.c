#include<stdio.h>

int isAlp(int size,char arr[size]){

        int index=0;//flag=0;
        while(arr[index]!='\0'){

                if(((arr[index]>=65)&&(arr[index]<=90))||((arr[index]>=97)&&(arr[index]<=122))){

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
        if(isAlp(size,arr)){

                printf("String is made of only alphabets\n");
        }else{printf("String contains digits\n");}
}
