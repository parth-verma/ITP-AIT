//
//  main.c
//  Concatenate 2 strings
//
//  Created by Parth Verma on 21/03/17.
//  Copyright © 2017 Parth Verma. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char str1[10], str2[10];
    printf("Enter 1st string: ");
    scanf("%s",str1);
    
    printf("Enter 2nd string: ");
    scanf("%s",str2);
    
    printf("The resultant string is %s.\n",strcat(str1,str2));
    return 0;
}
