//
//  main.c
//  Pattern:Box
//
//  Created by Parth Verma on 09/03/17.
//  Copyright © 2017 Parth Verma. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i,j,n;
    printf("Enter length of side of box: ");
    scanf("%d", &n);
    for (i = 0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0 || j==0 || i==n-1 || j==n-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
