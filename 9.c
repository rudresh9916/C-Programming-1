----------------> TO CHECK WHETHER THE CHARACTER IS VOWEL OR NOT
#include<stdio.h>
int main(){
    char ch;
    printf("enter the character");
    scanf("%c", &ch);
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("%c is a vowel.\n", ch);
        break;
    default:
        printf("%c is NOT a vowel.\n ", ch);

            }
            return 0;
}
