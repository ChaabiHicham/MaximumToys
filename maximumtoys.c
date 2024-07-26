#include <stdio.h>
int maximumToys(int prices_count, int* prices, int k) {
    long count=0;  
    long sum=0;  
    int tab[]={} ; 
    
    for(int i=0; i<=prices_count; i++) {
        if(prices[i] <= k) {  
            sum = sum + prices[i]; 

            if(sum <= k) {
                count++; 
            }
        }
    }
    
    return count;  
}
int main() {
    int prices[] = {33324560 ,77661073, 31948330, 21522343, 97176507, 5724692, 24699815, 12079402, 6479353, 28430129, 42427721, 57127004, 26256001, 29446837, 65107604, 9809008 ,65846182 ,8470661, 13597655, 360};
    int k = 100000;
    int prices_count=20;
    int result = maximumToys(prices_count, prices, k);
    printf("Maximum number : %d", result);

    return 0;
}