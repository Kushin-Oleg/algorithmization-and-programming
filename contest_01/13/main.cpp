#include <iostream>

int main(){
    int N, max=2, norm=0, len=1, b=1;
    std::cin >> N;
    for (int a=1; a<=N; a++){
        std::cout << a << " ";
        norm++;
        if(norm==len){
            std::cout << std::endl;
            len+=b;
            norm=0;
        }   
        if(len==max || len==1){
            b*=-1;
        }
        if(len==max){
            max++;
        }
    }
}
