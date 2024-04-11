#include <iostream>

// Largest Palindrome Product

int reverse(int num){
    if(num < 0) return -1; // Invalid number
    int rever_num = num % 10;
    num = num / 10;
    while(num > 0){
        rever_num *= 10;
        rever_num += num % 10;
        num/=10;
    }
    return rever_num;
}

bool isPalindromic(int num){
    if(num < 0) return -1;
    return num == reverse(num);
}
int main(){
    int largest = - 1;
    for(int i = 999;i>=100 ;i--){
        for(int j = 999;j>=100;j--){
            if(isPalindromic(i*j)&&i*j>largest) 
            largest = i*j;   
        }
    } 
    std::cout<<largest;   
    return 0;
}
