#include<stdio.h>

int main() {
    int n,m;
    scanf("%d %d", &n, &m);
    int multiN[1000] = {};
    int countN = 0;
    int multiM[1000] = {};
    int countM = 0;
    for(int i=2;i<n-1;i++){
        if(n % i == 0){
            multiN[countN] = i;
            countN++;
        }
    }
    for(int i=2;i<m-1;i++){
        if(m % i == 0){
            multiM[countM] = i;
            countM++;
        }
    }
    int common[100] = {};
    int index=0;
    for(int i=0;i<countN;i++){
        for(int j=0;j<countM;j++){
            if(multiN[i] == multiM[j]){
                common[index] = multiM[j];
                index++;
            }
        }
    }
    if(index >= 1){
        printf("%d", common[index-1]);
    }
    else{
        printf("1");
    }
    return 0;
}