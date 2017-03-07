//
//  main.c
//  static example
//
//  Created by Parth Verma on 01/03/17.
//  Copyright © 2017 Parth Verma. All rights reserved.
//

#include <stdio.h>

void increment()
{
    static int i;
    printf("%d\n",i);
    i++;
}

int main(int argc, const char * argv[]) {
    increment();
    increment();
    increment();
    return 0;
}
