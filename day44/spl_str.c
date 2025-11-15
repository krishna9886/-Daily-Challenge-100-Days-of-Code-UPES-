//Q87: Count spaces, digits, and special characters in a string.
#include<stdio.h>
int main(){
    int i,spaces=0,digits=0,special=0;
    char str[200];
    printf("enter your string:");
    gets(str);
    for(i=0;str[i]!='\0';i++){
        char ch=str[i];
        if(ch==' '){
            spaces++;
        }
        else if(ch>='0' && ch<='9'){
            digits++;
        }
        else if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
            continue;
        }
        else{
            special++;
        }
    }
    printf("Spaces=%d, Digits=%d, Special=%d\n",spaces,digits,special);
    return 0;

}
/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/