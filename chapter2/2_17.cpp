#include<iostream>
using namespace std;
int main(){
    int i,&ri = i; // ri与i绑定  因此左值引用任意一个数字变量修改引起另一个变量的修改
    ri = 10;i = 1;
    std::cout<<i<<" "<<ri;
    return 0;
}