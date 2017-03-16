//
//  main.c
//  Matrix Multiplication
//
//  Created by Parth Verma on 21/02/17.
//  Copyright © 2017 Parth Verma. All rights reserved.
//

#include <stdio.h>

int main() {
    int arr1[10][10], arr2[10][10], m,n,p,q;
    
    printf("Enter the dimensions of the first matrix: ");
    scanf("%d %d", &m, &n);
    
    printf("Enter the elements of the first matrix: \n");
    
    for(int i=0; i<m;i++)
    {
        for (int j=0; j<n ; j++) {
            scanf("%d", & arr1[i][j]);
        }
    }
    
    
    printf("Enter the dimensions of the second matrix: ");
    scanf("%d %d", &p, &q);
    
    printf("Enter the elements of the second matrix:\n");
    
    for(int i=0; i<p;i++)
    {
        for (int j=0; j<q ; j++) {
            scanf("%d", & arr2[i][j]);
        }
    }
    
    printf("Transpose of first matrix:\n");
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            printf("%d ",arr1[j][i]);
        }
        printf("\n");
    }
    
    
    printf("Transpose of second matrix:\n");
    for (int i=0; i<q; i++) {
        for (int j=0; j<p; j++) {
            printf("%d ",arr2[j][i]);
        }
        printf("\n");
    }
    
    if (m==q && n==p) {
        printf("Matrix Multiplication:\n");
        for(int i=0;i<m;i++)
        {
            for (int j=0; j<m; j++) {
                int sum = 0;
                for (int k=0; k<n; k++) {
                    sum += arr1[i][k]*arr1[k][j];
                }
                printf("%d ",sum);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix multiplication is not possible as the dimensions of the matrices do not match.");
    }
    return 0;
}
