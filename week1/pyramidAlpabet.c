#include<stdio.h>
//print a pyramid full of alphabet
int main() {
    int n;
    scanf("%d", &n);
    int space = n-1;
    int numOfAlphabet = 1;
    int alphabet = 65;
    for(int i=0;i<n;i++){
        for(int j=0;j<space;j++){
            printf(" ");
        }
        for(int k=0;k<numOfAlphabet;k++){
            printf("%c", alphabet);
            alphabet++;
            if(alphabet > 90){
                alphabet = 65;
            }
        }
        space--;
        numOfAlphabet+=2;
        if(i != n-1){
            printf("\n");
        }
    }
    return 0;
}