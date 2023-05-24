// 计算课程成绩.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int main()
{
    char a[50][101] = { 0 };
    float b[50] = { 0 }, c[50] = { 0 }, d[50] = { 0 };
    int i = 0;
    while (scanf_s("%c%f%f", a[i], &b[i], &c[i]))
    {
        d[i] = 0.4 * b[i] + 0.6 * c[i];
        i++;
    }
	for (int q = 0; q < i - 1; q++)
	{
		for (int p = 0; p < i - q - 1; p++)
		{
			if (d[p] < d[p + 1])
			{
				float swap1 = d[p];
				d[p] = d[p + 1];
				d[p + 1] = swap1;

				float swap2 = b[p];
				b[p] = b[p + 1];
				b[p + 1] = swap2;

				float swap3 = c[p];
				c[p] = c[p + 1];
				c[p + 1] = swap3;

				char *swap4 = a[p];
				*a[p] = *a[p + 1];
				*a[p + 1] = *swap4;
			}
		}
	}
	for (int x = 0; x < i; x++)
	{
		cout << a[x] << ' ' << b[x] << ' ' << c[x] << ' ' << d[x];
	}
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
