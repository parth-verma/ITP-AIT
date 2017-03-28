//
//  main.c
//  Insertion Sort
//
//  Created by Parth Verma on 28/03/17.
//  Copyright © 2017 Parth Verma. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int arr[10],n,i,j,k;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for (i = 0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    
    for (i = 1; i < n; i++)
    {
        k = arr[i];
        j = i-1;
        while (j >= 0 && arr[j] > k)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = k;
    }
    
    for (i = 0; i<n; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
