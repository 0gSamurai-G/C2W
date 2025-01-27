#include<stdio.h>

char* trim(int size,int size1,char arr[size],char arr1[size1]){

        int index=0,count=0;
        while(arr[index]!='\0'){

                if(arr[index]==32){

                        index++;
                }else{

                        arr1[count]=arr[index];
                        count++;
                        size1++;
                        index++;
                }
        }arr1[count]='\0';
        return arr1;
}

void main(){

        int size=1,size1=1,index=0;
        char ch,arr[size],arr1[size1];
        printf("Enter a string:\n");
        while((ch=getchar())!='\n'){

                arr[index]=ch;
                index++;
                size++;
        }arr[index]='\0';
        printf("String without spaces:%s\n",trim(size,size1,arr,arr1));
}
