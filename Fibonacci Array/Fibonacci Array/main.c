//
//  main.c
//  Fibonacci Array
//
//  Created by Parth Verma on 21/02/17.
//  Copyright © 2017 Parth Verma. All rights reserved.
//

#include <stdio.h>

int main() {
    int f[100], n, i;
    f[0]=f[1]=1;
    printf("Enter number of fibonacci numbers to print: ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        f[i]=f[i - 1] + f[i - 2];
    }
    
    printf("The first %d terms of fibonacci series are:\n", n);
    
    for (i=0; i<n; i++)
    {
        printf("%d\n",f[i]);
    }
    
    return 0;
}
