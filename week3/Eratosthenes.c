#include <stdio.h>
#include<string.h>
int main() {
	//code
	int t;
	scanf("%d\n", &t);
    int n[100];
    //get t inputs;
    for(int i=0;i<t;i++){
        scanf("%d", &n[i]);
    }
    int count = 0;
    while(count < t){
        int num[n[count]]; //create array to store all the number from 0 to n
        memset(num, 0, n[count]*sizeof(num[0])); //assign 0 to all the value of numbers
        num[0] = 1; //mark 0 and 1 (not prime num)
        num[1] = 1;
        for(int i=2; i*i <= n[count] ; i++){ //loop until i >= sqrt(n)
            if(num[i] != 1){ //if i is not mark then i is prime
                for(int j= i*i ; j <= n[count] ; j += i){ //then mark all the multipliers of i (first one is i*i)
                    num[j] = 1;
                }
            }
        }
        for(int i=0;i<=n[count];i++){
            if(num[i] != 1){ //print all the non mark numbers (prime number)
                printf("%d ", i);
            }
        }
        printf("\n");
        count++;
    }
	return 0;
}