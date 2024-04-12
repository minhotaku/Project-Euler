#include <iostream>

// Sum Square Difference

int main(){
    int sum;
    int square;
    sum = square = 0;
    for(int i = 1; i <= 100;i++){
        sum += i*i;
        square += i;
    }
    square *= square;
    std::cout << square - sum;
    return 0;
}