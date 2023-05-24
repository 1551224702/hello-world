#include<iostream>
 



#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int a[201], b[201], t, p, v; // 定义两个多项式的系数数组a和b，以及临时变量和幂次p
    memset(a, 0, sizeof(a)); // 数组初始化为0
    memset(b, 0, sizeof(b));
    while (cin >> p >> v && p) // 输入第一个多项式
        a[p] += v;
    while (cin >> p >> v && p) // 输入第二个多项式
        b[p] += v;
    bool first = true; // 控制输出格式
    for (int i = 200; i >= 0; i--) // 因为指数最高可以达到200，所以数组要开到201
    {
        t = a[i] + b[i]; // 计算对应幂次的系数之和
        if (t != 0) // 系数不为0才输出
        {
            if (!first) // 控制输出格式
            {
                if (t > 0) // 判断输出符号
                    cout << '+';
                if (t != 1 && t != -1 || i == 0) // 判断是否需要输出系数
                    cout << t;
                if (i > 1) // 判断是否需要输出幂次i
                    cout << 'x' << i;
                else if (i == 1) // 幂次为1时不需要输出幂次
                    cout << 'x';
            }
            else
            {
                if (t != 1 && t != -1 || i == 0) // 判断是否需要输出系数
                    cout << t;
                if (i > 1) // 判断是否需要输出幂次i
                    cout << 'x' << i;
                else if (i == 1) // 幂次为1时不需要输出幂次
                    cout << 'x';
                first = false;
            }
        }
    }
    if (first) // 如果两个多项式的系数都为0，输出0
        cout << "0";
    return 0;
}
