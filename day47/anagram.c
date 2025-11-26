//Q93: Check if two strings are anagrams of each other.
#include<stdio.h>
int main() {
    char str[200] ;
    char str2[200];
    int freq[26] = {0}; // Frequency array for 'a' to 'z'
    printf("Enter first string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    for(int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if(ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
        } else if(ch >= 'A' && ch <= 'Z') {
            freq[ch - 'A']++;
        }
    }
    for(int i = 0; str2[i] != '\0'; i++) {
        char ch = str2[i];
        if(ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']--;
        } else if(ch >= 'A' && ch <= 'Z') {
            freq[ch - 'A']--;
        }
    }
    for(int i = 0; i < 26; i++) {
        if(freq[i] != 0) {
            printf("Not anagrams\n");
            return 0;
        }
    }
    printf("Anagrams\n");
    return 0;

}
/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/