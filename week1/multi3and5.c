#include<stdio.h>
//Find the sum of all the multiples of 3 or 5 below 1000.
int main() {
    int sum = 0;
    for(int i=1;i<1000;i++){
        if(i % 3 == 0 && i % 5 == 0){
            sum += i;
        }
        else if(i % 3 == 0 ){
            sum += i;
        }
        else if(i % 5 == 0 ){
            sum += i;
        }
    }
    printf("%d", sum); //233168 is correct according to ProjectEuler.com
    return 0;
}