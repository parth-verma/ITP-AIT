//
//  main.c
//  Pattern 1
//
//  Created by Parth Verma on 21/02/17.
//  Copyright © 2017 Parth Verma. All rights reserved.
//

#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for(i=0;i<n;i++)
    {
        for (j=0; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
