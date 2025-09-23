#include <stdio.h>

int main(void){
    int n,k;
    scanf("%d %d", &n, &k);
    int arry[n];
    
    for(int i=0;i<n;i++){
        scanf("%d ", &arry[i]);
    }
    int arry2[n];
    
    for(int i=0;i<n;i++){
       if(i+k<n){ 
            arry2[i+k]=arry[i];
       }
       else{
           k-=n;
           i--;
       }
    }
    
    for(int i=0;i<n;i++){
        printf("%d ", arry2[i]);
    }
    return 0;
}

