//
//  main.c
//  Simple Intrest Calculator
//
//  Created by Parth Verma on 24/01/17.
//  Copyright © 2017 Parth Verma. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    long double principle, rate, time, intrest;
    printf("Enter principle:");
    scanf("%Lf",&principle);
    printf("Enter rate of intrest:");
    scanf("%Lf",&rate);
    printf("Enter time (in years)");
    scanf("%Lf",&time);
    intrest=principle*rate*time/100;
    printf("Intrest to be paid: %Lf\n",intrest);
    printf("Total amount to be paid: %Lf\n", principle+intrest);
    printf("Amount to be paid per month: %Lf\n", (principle+intrest)/(12*time));
    
    return 0;
}
