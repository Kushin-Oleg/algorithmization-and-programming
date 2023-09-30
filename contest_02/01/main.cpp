#include <iostream>
#include <cmath>

bool is_prime(int number){
    if (number<2){return false;};
    for (int i=2; i<=std::sqrt(number);i++){
        if(number%i==0){return false;};
    }
    return true;
}

int main(){
    int number;
    std::cin >> number;
    std::cout << (is_prime(number) ? "YES" : "NO") << std::endl;
}
