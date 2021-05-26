#include<iostream>
using namespace std;
//extern关键字可以起到只声明 不定义即不初始化
int main(){
    int b = 1;
    int &a = b; //左值引用 b的别名为a 修改a影响b
    a = 2;
    printf("%d",b);
    return 0;
}
