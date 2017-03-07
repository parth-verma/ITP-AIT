//
//  main.c
//  Multiplicative tables
//
//  Created by Parth Verma on 14/02/17.
//  Copyright © 2017 Parth Verma. All rights reserved.
//

#include <stdio.h>

int main() {
    // insert code here...
    int n, table[10],i;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    for (i=0;i<10;i++)
        table[i] = n * (i + 1);
    
    printf("Table of %d is:\n",n);
    
    for (i=0;i<10;i++)
        printf("%d x %d = %d.\n",n,i + 1,table[i]);
    return 0;
}
