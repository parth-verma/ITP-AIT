//
//  main.c
//  Binary Search
//
//  Created by Parth Verma on 28/03/17.
//  Copyright © 2017 Parth Verma. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int arr[10],n,i,x;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for (i = 0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    
    // sorting the elements
    
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
    
    printf("Enter element to search: ");
    scanf("%d",&x);
    int beg=0,end=n-1,mid,flag = 0;
    while(beg<=end)
    {
        mid = (beg+end)/2;
        if (arr[mid] == x) {
            flag = 1;
            break;
        }
        else if (arr[mid]>x)
            end = mid -1;
        else
            beg = mid+1;
    }
    
    if (flag==0) {
        printf("Element does not exist in the array.\n");
    }
    else
        printf("Element found in the array at position %d.\n",mid+1);

    return 0;
}
