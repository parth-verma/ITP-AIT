//
//  main.c
//  Selection Sort
//
//  Created by Parth Verma on 28/03/17.
//  Copyright © 2017 Parth Verma. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int arr[10],n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for (int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    
    for (int i=0;i<n;i++)
    {
        int pos,value;
        pos=i;
        value=arr[i];
        for (int j=i; j<n; j++) {
            if (arr[j]<value)
            {
                value = arr[j];
                pos = j;
            }
        }
        int temp;
        temp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = temp;
    }
    
    for (int i=0; i<n; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
