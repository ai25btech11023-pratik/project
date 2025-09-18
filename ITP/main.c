//
//  main.c
//  ITP
//
//  Created by Pratik Raj on 18/09/25.
//

#include <stdio.h>
#include <math.h>

int digits(int n){
    int count=0;
    while(n>0){
        n/=10;
        count++;
    }
    return count;
}

int cuSum(int n){
    int sum=0,num;
    
    int dig = digits(n);
    while(n>0){
        num = n%10;
        sum+= pow(num,dig);
        n/=10;
    }
    return sum;
}

int main(void){
    int n;
    scanf("%d", &n);
    if(cuSum(n)==n){
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }
    return 0;
}

