//
//  main.c
//  Greatest of three numbers
//
//  Created by Parth Verma on 31/01/17.
//  Copyright © 2017 Parth Verma. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x,y,z,greatest;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&x,&y,&z);
    if (x > y)
    {
        if (x > z)
            greatest = x;
        else
            greatest = z;
    }
    else
    {
        if (y > z)
            greatest = y;
        else
            greatest = z;
    }
    printf("The greatest of the three numbers is %d.\n",greatest);
    return 0;
}
