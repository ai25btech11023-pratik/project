#include <stdio.h>
#include <math.h>
int main() {
	// your code goes here
    int k;
    scanf("%d",&k);
    int x_pickCoord[k];
    int y_pickCoord[k];
    int x_dropCoord[k];
    int y_dropCoord[k];
    
    for(int i=0;i<k;i++){
        scanf("%d %d %d %d", &x_pickCoord[i], &y_pickCoord[i], &x_dropCoord[i], &y_dropCoord[i]);
    }
    int i = 0;
    double dist = 0;
    do{
        dist += sqrt(pow(x_dropCoord[i]-x_pickCoord[i],2)+pow(y_dropCoord[i]-y_pickCoord[i],2));
        i++;
        if(x_dropCoord[i-1]!=x_pickCoord[i] || y_dropCoord[i-1]!=y_pickCoord[i]){
            continue;
        }
    }
    while(i<k);
    
    printf("%.2lf", dist);
    return 0;
}

