//Q96: Reverse each word in a sentence without changing the word order.
#include<stdio.h> 
int main(){
    char str[200];
    printf("enter your string:");
    fgets(str, sizeof(str), stdin);
    
    int start = 0;
    for (int i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            int end = i - 1;
            
            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
        if (str[i] == '\0') {
            break;
        }
    }

    printf("%s", str);
    return 0;
    
}
/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/