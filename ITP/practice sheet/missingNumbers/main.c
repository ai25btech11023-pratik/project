#include <stdio.h>

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortArray(int arry[], int n){
    for(int i=0;i<n-1;i++){
        int swapped =0;
        for(int j=0;j<n-i-1;j++){
            if(arry[j]>arry[j+1]){
                swap(&arry[j],&arry[j+1]);
                swapped =1;
            }
        }
        if(swapped==0){
            break;
        }
    }
}


void printArray(int arry[],int n){
    for(int i=0;i<n;i++){
        printf("%d ", arry[i]);
    }
    printf("\n");
}


void scanArray(int arry[], int n){
    for(int i=0;i<n;i++){
        scanf("%d ", &arry[i]);
    }
}

void findMissing(int arry[], int n, int miss[]){
    int k=0;
    for(int i =0;i<n-1;i++){
        int diff = arry[i+1]-arry[i];
        if(diff!=1){
            miss[k] = arry[i]+1;
            k++;
        }
    }
}



int main(void){
    int n;
    scanf("%d",&n);
    int k =n-2;
    int arry[k];
    int miss[2];
    
    scanArray(arry,k);
    sortArray(arry,k);
    findMissing(arry,k,miss);
    sortArray(miss,2);
    printArray(miss,2);
    return 0;
    
}

