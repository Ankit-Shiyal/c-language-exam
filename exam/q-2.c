#include <stdio.h>
#include <ctype.h>

void countConsonants(char str[]) {
    int count[26] = {0};
    int i;
    char ch;

    for (i = 0; str[i] != '\0'; i++) {
        ch = tolower(str[i]);

        if (ch >= 'a' && ch <= 'z') {
            if (!(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')) {
                count[ch - 'a']++;
            }
        }
    }

    printf("Consonant counts:\n");
    for (i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c = %d\n", i + 'a', count[i]);
        }
    }
}

int main() {
    char sentence[200];

    printf("Enter a sentence: ");
    scanf("%s",sentence);   

    countConsonants(sentence);
    return 0;
}


