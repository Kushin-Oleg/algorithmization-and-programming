#include <iostream>
#include <string>

int main(){
    std::string a;
    std::cin >> a;
    a.append("f");
    char sim = a[0];
    int b = 1;
    for(int i = 1;i<a.length();i++){
        if(a[i]==sim){b++;
        continue;
        }
        if(a[i] != sim){std::cout << sim; if (b>1){std::cout << b;}
        sim=a[i];
        b=1;
    }
    }
}
