#include<stdio.h>

char* toggle(int size,char arr[size]){

        int index=0;
        char temp;
        while(arr[index]!='\0'){

                if((arr[index]>=65)&&(arr[index]<=90)){

                        temp=arr[index];
                        arr[index]+=32;
                }else if((arr[index]>=97)&&(arr[index]<=122)){

                        temp=arr[index];
                        arr[index]-=32;
                }index++;
        }return arr;
}

void main(){

        int size=1,index=0;
        char ch,arr[size];
        printf("Enter a string:\n");
        while((ch=getchar())!='\n'){

                arr[index]=ch;
                index++;
                size++;
        }printf("Toggled:%s\n",toggle(size,arr));
}
