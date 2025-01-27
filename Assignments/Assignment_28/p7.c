#include<stdio.h>

char* replace(int size,char arr[size],char ch,char ch1){

        int index=0;
        while(arr[index]!='\0'){

                if(arr[index]==ch) arr[index]=ch1;
                index++;
        }return arr;
}

void main(){

        int size=1,index=0;
        char ch,ch1,arr[size];
        printf("Enter a string:\n");
        while((ch=getchar())!='\n'){

                arr[index]=ch;
                size++;
                index++;
        }arr[index]='\0';
        printf("Enter a character to replace:\n");
        scanf("%c",&ch);
        getchar();
        printf("Enter a replacing char:\n");
        scanf("%c",&ch1);
        printf("Replaced string:%s\n",replace(size,arr,ch,ch1));

}
