//
//  main.c
//  reverse a string
//
//  Created by Parth Verma on 21/03/17.
//  Copyright © 2017 Parth Verma. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char str[10],rev_str[10];
    int size,i;
    printf("Enter a string: ");
    scanf("%s",str);
    for(size=0; str[size]!='\0';size++);
    for(i=0;i<=size;i++)
    {
        rev_str[i] = str[size-1-i];
    }
    rev_str[i]='\0';
    printf("Reverse of %s is %s.\n",str,rev_str);
    return 0;
}
