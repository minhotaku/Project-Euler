#include <iostream>

// Smallest Multiple

bool checkPerfect(int n){
    for (int i = 19; i > 1; i--){
        if (n % i)
            return false;
    }
    return true;
}

int main(){
    int num = 20;
    while (!checkPerfect(num)){
        num += 20;
    }
    std::cout << num;
    return 0;
}