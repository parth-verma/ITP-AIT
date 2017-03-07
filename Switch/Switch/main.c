//
//  main.c
//  Switch
//
//  Created by Parth Verma on 07/02/17.
//  Copyright © 2017 Parth Verma. All rights reserved.
//

#include <stdio.h>

int main() {
    int avg, sum=0,i,x;
    char grade;
    
    for(i=0;i<5;i++)
    {
        printf("Enter marks in subject #%d: ",i+1);
        scanf("%d",&x);
        sum+=x;
    }
    
    avg=sum/5;
    
    switch((avg-1)/10)
    {
        case 9:
            grade='A';
            break;
        case 8:
            grade='B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';
            
    }
    
    if (grade=='F')
        printf("Fail\n");
    else
        printf("Your grade is %c\n",grade);
    return 0;
}
