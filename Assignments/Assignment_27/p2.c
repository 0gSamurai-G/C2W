int isLow(char ch){

        if((ch>=97)&&(ch<=122)){

                return 1;
        }return 0;
}

int isUp(char ch){

        if((ch>=65)&&(ch<=90)){

                return 1;
        }return 0;
}

void main(){

        char ch;
        printf("Enter a character:\n");
        scanf("%c",&ch);
        if(isLow(ch)){
                printf("%c is in lower case\n",ch);
        }else if(isUp(ch)){
                printf("%c is in upper case\n",ch);
        }else{

                printf("%c is not an alphabet\n",ch);
        }
}
