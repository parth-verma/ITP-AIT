//
//  main.c
//  Character array
//
//  Created by Parth Verma on 14/02/17.
//  Copyright © 2017 Parth Verma. All rights reserved.
//

#include <stdio.h>

int main() {
    // insert code here...
    char s[10];
    int i, vowel=0, consonant=0;
    printf("Enter a string: ");
    scanf("%s",s);
    for (i=0; s[i] != '\0'; i++)
    {
        if (s[i]=='a' || s[i]=='e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            vowel++;
        else
            consonant++;
    }
    
    printf("Number of vowels in the given string is %d.\n",vowel);
    printf("Number of consonants in the given string is %d.\n", consonant);
    return 0;
}
