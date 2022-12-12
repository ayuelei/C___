#include <iostream>         // 包含头文件。

using namespace std;        // 指定缺省的命名空间。

// main函数，程序从这里开始执行，每个程序只能有一个main函数。
int main()
{
    // 超女必须满足四个条件：年龄25岁以下，身高165以上、体重50公重以下，颜值要漂亮。
    int age = 23;
    int height = 168;
    double weight = 48.8;
    bool yz = true;

    cout << "result="<<(age<25&&height>165&&weight<50&&yz==true) << endl;
}