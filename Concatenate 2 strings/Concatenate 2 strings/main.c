//
//  main.c
//  Concatenate 2 strings
//
//  Created by Parth Verma on 21/03/17.
//  Copyright © 2017 Parth Verma. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char str1[10], str2[10],str3[20];
    int i,j;
    
    printf("Enter 1st string: ");
    scanf("%s",str1);
    
    printf("Enter 2nd string: ");
    scanf("%s",str2);
    
    for(i=0,j=0;str1[i]!='\0';i++,j++)
    {
        str3[j]=str1[i];
    }
    for (i=0; str2[i]!='\0'; i++,j++) {
        str3[j]=str2[i];
    }
    printf("The resultant string is %s.\n",str3);
    return 0;
}
