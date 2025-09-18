//
//  main.c
//  ITP
//
//  Created by Pratik Raj on 18/09/25.
//
#include <stdio.h>
#include <math.h>
int main(void){
    double x;
    int k;
    double ans=0;
    scanf("%lf %d",&x,&k);
    for(int i=0;i<k;i++){
        ans += pow(-1,i)*(pow(x,i+1)/(i+1));
    }
    printf("%lf", ans);
    return 0;
}
