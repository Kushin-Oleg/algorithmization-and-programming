#include <iostream>

int main(){
    int a, b, c, ab, ac;
    std::cin >> a >> b >> c;
    if(a<b){ab=b-a;} else{ab=a-b;}
    if(a<c){ac=c-a;} else{ac=a-c;}
    if(ab<ac){
        std::cout << "B " << ab;
    }
    else{
        std::cout << "C " << ac;
    }
}
