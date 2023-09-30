#include <iostream>
#include <string>
#include <algorithm>

int main(){
    std::string a,b;
    bool t = true;
    std::cin >> a >> b;
    std::sort(begin(a), end(a));
    std::sort(begin(b), end(b));
    for (int i =1;i<=a.length();i++){
        if (a[i]==b[i]){
            t = true;
            continue;}
        else{
            t = false;
            break;
        }
    }
    if (t==true){
        std::cout << "Yes";
    } else{ std::cout << "No";}
}
