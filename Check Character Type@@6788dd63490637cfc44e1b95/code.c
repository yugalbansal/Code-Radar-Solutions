#include <stdio.h>

int main() {
    char ch;
    if(isalpha(ch)){
        c = tolower(ch);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else if(isdigit(ch)){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}