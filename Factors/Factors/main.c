//
//  main.c
//  Factors
//
//  Created by Parth Verma on 31/01/17.
//  Copyright © 2017 Parth Verma. All rights reserved.
//

#include <stdio.h>

int main() {
    int x,i;
    printf("Enter an integer: ");
    scanf("%d",&x);
    printf("Factors of %d are:\n",x);
    for(i = 1;i <= x;i++)
    {
        if(x % i == 0)
            printf("%d\n",i);
    }
    return 0;
}
