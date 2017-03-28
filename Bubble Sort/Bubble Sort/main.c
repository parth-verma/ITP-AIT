//
//  main.c
//  Bubble Sort
//
//  Created by Parth Verma on 28/03/17.
//  Copyright © 2017 Parth Verma. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, arr[10];
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for (int i=0 ; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    
    for (int i=0; i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    for (int i=0; i<n; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
