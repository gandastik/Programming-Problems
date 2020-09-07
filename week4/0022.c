#include <stdio.h>

int main(){
    int n;
    int count = 1;
    scanf("%d", &n);
    int i = n;
    if(n % 2 == 0){
        i = n-1;
    }
    for(int j=1;j<=n;j++){
        for(int k=0;k<i;k++){
            if((j == n || j == count) && k == i/2){
                printf("*");
            }
            // else if( && (k == (i/2)+1 || k == (i/2)-1)){
            //     printf("*");
            // }
            else{
                printf("_");
            }
        }
        count++;
        printf("\n");
    }


    return 0;
}