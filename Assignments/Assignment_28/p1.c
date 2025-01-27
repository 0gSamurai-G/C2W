#include<stdio.h>

int mystrlen(int size,char arr[size]){

        int count=0;
        for(int i=0;i<size;i++){

                if(arr[i]!='\0') count++;
        }return count;
}

void main(){

        int index=0,size=1;
        char ch,arr[size];
        printf("Enter a string:\n");
        while((ch=getchar())!='\n'){

                arr[index]=ch;
                size++;
                index++;
        }arr[index]=('\0');

        printf("Length of string is :%d\n",(mystrlen(size,arr)));

}