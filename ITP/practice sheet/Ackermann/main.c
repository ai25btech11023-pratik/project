#include <stdio.h>

int digit(int n){
    int count =0;
    while(n>0){
        n/=10;
        count++;
    }
    return count;
}

void digArray(int n,int arry[]){
    int k = digit(n);
    int rem;
    for(int i=k-1;i>=0;i--){
        rem = n%10;
        arry[i]= rem;
        n/=10;
    }
}

int fibo(int k){
    if(k>0){
    return k + fibo(k-1);
    }
    return 0;
}

int main(){
    int n,k;
    int ans =0;
    scanf("%d %d",&n,&k);
    int dig = digit(n);
    int arry[dig];
    digArray(n,arry);
    int idx2=0;
    for(int i=0;i<dig;i++){
        int sum =0;
        int idx =i;
        while(sum<=k && idx <dig){
            sum+= arry[idx];
            idx++;
            if(sum+arry[idx]>k){
                break;
            }
        }
        
        
        ans+= fibo(idx-i)-fibo(idx2-i);
        
        idx2 = idx;
    }
    printf("%d", ans);
}