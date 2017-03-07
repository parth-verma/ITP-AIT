//
//  main.c
//  Factorial
//
//  Created by Parth Verma on 31/01/17.
//  Copyright © 2017 Parth Verma. All rights reserved.
//

#include <stdio.h>

int main() {
    int x,fact=1,i=1;
    printf("Enter any number: ");
    scanf("%d",&x);
    while(i <= x)
    {
        fact *= i;
        i++;
    }
    printf("The factorial of %d is %d.\n", x, fact);
    return 0;
}
