//
//  main.c
//  Length of string
//
//  Created by Parth Verma on 21/03/17.
//  Copyright © 2017 Parth Verma. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main() {
    char str[10];
    printf("Enter a string: ");
    scanf("%s",str);
    printf("Size of given string is %lu.\n",strlen(str));
    return 0;
}
