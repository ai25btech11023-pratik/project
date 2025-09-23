#include <stdio.h>
unsigned long int power(int n,int k){
    unsigned long int r = 1;
    for(int i=0;i<k;i++){
        r*=n;
    }
    return r;
}

int dig(unsigned long int n){
    int count =0;
    while(n>0){
        n=n/10;
        count++;
    }
    return count;
}

int digI(unsigned long int n,int i){
    n/=power(10,i);
    return n%10;
}

int main(){
    unsigned long int n;
    int k;
    scanf("%lu %d",&n,&k);
    int i=0;
    unsigned long int p =n;
    while(i*k<dig(n)){
        n+=digI(p,i*k)*power(10,i*k);
        
        i++;
        if(digI(n,i*k)!=digI(p,i*k)){
            n-=power(10,i*k);
        }
        
    }
    
    printf("%d\n%lu",i, n);
    
    
}