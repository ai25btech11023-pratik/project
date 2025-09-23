#include <stdio.h>



int main(){
    unsigned long int riceAvail;
    scanf("%lu", &riceAvail);
    unsigned long int riceReq=1;
    unsigned long int need =1;
    int sq = 1;
    if(riceAvail ==0){
        printf("NO\n%d",sq);
        return 0;
    }
    while(sq<=49){
       if(riceReq+(need*2)<=riceAvail){
            sq++;
	    need *= 2;
            riceReq+=need;
        }
        else break;
    }
    if(sq>=49){
        printf("YES\n%lu",riceAvail - riceReq);
    }
    else{
        printf("NO\n%d", sq);
    }
    return 0;
}