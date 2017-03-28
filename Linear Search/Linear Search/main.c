//
//  main.c
//  Linear Search
//
//  Created by Parth Verma on 28/03/17.
//  Copyright © 2017 Parth Verma. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int arr[100],n,x,i,flag=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the element: ");
    for (i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d",&x);
    for (i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            flag=1;
            break;
        }
    }
    if (flag == 1)
        printf("Element %d was found at index %d in the array.\n",x,i+1);
    else
        printf("Element does not exist.\n");
    return 0;
}
