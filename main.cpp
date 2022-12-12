#include <iostream>         // 包含头文件。

using namespace std;        // 指定缺省的命名空间。

// main函数，程序从这里开始执行，每个程序只能有一个main函数。
int main()
{
    /*int a =10, b=20;

    cout << "a=" << a << endl;
    cout << "b=" << b << endl;*/

    int a, b;
    //b = a = 2, a * 2;
    b = (a = 2, a * 2);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}