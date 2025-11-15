//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include<stdio.h>
int main() { 
    char alph;
    printf("enter your alphabet : ", alph);
    scanf("%c", &alph);

    if(alph =='a' || alph =='e' || alph =='i' || alph =='o' || alph =='u' || alph =='A' || alph =='E' || alph =='I' || alph =='O' || alph =='U') {
        printf("it is a vowel\n");
    } else {
        printf("it is a consonant\n");
    }
    return 0;
}
