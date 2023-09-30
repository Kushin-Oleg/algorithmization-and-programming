#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <string>

int main(){
    std::string input;
    std::unordered_map<std::string, int> count;
    std::vector<std::string> otv;
    while (std::cin >> input && input !="end"){count[input]++;}
    for (const auto word : count){
        if(word.second>=2){otv.push_back(word.first);}
    }
    std::sort(begin(otv), end(otv));
    for (const auto input : otv) {std::cout << input << " ";}
    return 0;
}
