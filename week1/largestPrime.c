#include<stdio.h>
//What is the largest prime factor of the number 600851475143 ?
int main() {
    long long num = 600851475143;
    int arr[1000];
    int j=0;
    for(long long i=2;i<num;i++){
        if(num % i == 0){
            arr[j] = i;
            j++;
        }
    }
    printf("%d", arr[j]);
    return 0;
}