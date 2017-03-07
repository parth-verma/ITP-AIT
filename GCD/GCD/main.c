//
//  main.c
//  GCD
//
//  Created by Parth Verma on 07/02/17.
//  Copyright © 2017 Parth Verma. All rights reserved.
//

#include <stdio.h>

int gcd(int a, int b)
{
    if(a%b==0)
        return b;
    else
        return gcd(b,a%b);
}

int main() {
    // insert code here...
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a,&b);
    printf("GCD of %d and %d is %d.\n",a,b,gcd(a, b));
    return 0;
}
