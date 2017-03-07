//
//  main.c
//  Recursive Factorial
//
//  Created by Parth Verma on 07/02/17.
//  Copyright © 2017 Parth Verma. All rights reserved.
//

#include <stdio.h>


int fact(int n)
{
    if (n<1)
        return 1;
    else
        return n * fact(n - 1);
}


int main() {
    int n;
    do{
        printf("Enter an integer: ");
        scanf("%d",&n);
    }while (n < 0);
    
    printf("Factorial of %d is %d.\n", n, fact(n));
    return 0;
}
