//
//  main.c
//  Copy one string into another
//
//  Created by Parth Verma on 21/03/17.
//  Copyright © 2017 Parth Verma. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#define MAXSIZEOFSTR1 10
#define MAXSIZEOFSTR2 10
int main(int argc, const char * argv[]) {
    char str1[MAXSIZEOFSTR1],str2[MAXSIZEOFSTR2];
    printf("Enter a string: ");
    scanf("%s",str1);
    
    strcpy(str2, str1);
    
    printf("The contents of str2 are %s.\n",str2);
    return 0;
}
