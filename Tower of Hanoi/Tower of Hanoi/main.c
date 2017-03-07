//
//  main.c
//  Tower of Hanoi
//
//  Created by Parth Verma on 07/02/17.
//  Copyright © 2017 Parth Verma. All rights reserved.
//

#include <stdio.h>

void TowerofHanoi(int n, char from, char to, char extra)
{
    if(n==1)
    {
        printf("Moving %d from %c to %c.\n",n,from,to);
        return;
    }
    else
    {
        TowerofHanoi(n-1, from, extra, to);
        printf("Moving %d from %c to %c.\n", n, from,to);
        TowerofHanoi(n-1, extra, to, from);
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    TowerofHanoi(3, 'A', 'B', 'C');
    return 0;
}
