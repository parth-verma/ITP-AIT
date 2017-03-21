//
//  main.c
//  Length of string
//
//  Created by Parth Verma on 21/03/17.
//  Copyright © 2017 Parth Verma. All rights reserved.
//

#include <stdio.h>

int main() {
    char str[10];
    int size = 0;
    printf("Enter a string: ");
    scanf("%s",str);
    for(size=0;str[size]!='\0';size++);
    printf("Size of given string is %d.\n",size);
    return 0;
}
