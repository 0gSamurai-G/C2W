#include<stdio.h>

int strchar(int size,char arr[size],char ch){

        int index=0,flag=0;
        while(arr[index]!='\0'){

                if(arr[index]==ch){

                        flag=1;
                        return index;
                }index++;
        }if(flag==0) printf("Search failed!\n");
}

void main(){

        int index=0,size=1;
        char ch,arr[size];
        printf("Enter a string:\n");
        while((ch=getchar())!='\n'){

                arr[index]=ch;
                index++;
                size++;
        }arr[size]='\0';
        printf("Enter a character to search:\n");
        scanf("%c",&ch);
        printf("Location of %c : %d\n",ch,strchar(size,arr,ch));
}
