#include <iostream>
#include <string>

int main(){
    int n;
    std::cin >> n;
    std::string a = "";
    while (n>0){
        int simv = (n-1)%26;
        a = char(simv + 'A')+a;
        n = (n-1)/26;
    }
    std::cout << a;
}
