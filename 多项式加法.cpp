#include<iostream>
 



#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int a[201], b[201], t, p, v; // ������������ʽ��ϵ������a��b���Լ���ʱ�������ݴ�p
    memset(a, 0, sizeof(a)); // �����ʼ��Ϊ0
    memset(b, 0, sizeof(b));
    while (cin >> p >> v && p) // �����һ������ʽ
        a[p] += v;
    while (cin >> p >> v && p) // ����ڶ�������ʽ
        b[p] += v;
    bool first = true; // ���������ʽ
    for (int i = 200; i >= 0; i--) // ��Ϊָ����߿��Դﵽ200����������Ҫ����201
    {
        t = a[i] + b[i]; // �����Ӧ�ݴε�ϵ��֮��
        if (t != 0) // ϵ����Ϊ0�����
        {
            if (!first) // ���������ʽ
            {
                if (t > 0) // �ж��������
                    cout << '+';
                if (t != 1 && t != -1 || i == 0) // �ж��Ƿ���Ҫ���ϵ��
                    cout << t;
                if (i > 1) // �ж��Ƿ���Ҫ����ݴ�i
                    cout << 'x' << i;
                else if (i == 1) // �ݴ�Ϊ1ʱ����Ҫ����ݴ�
                    cout << 'x';
            }
            else
            {
                if (t != 1 && t != -1 || i == 0) // �ж��Ƿ���Ҫ���ϵ��
                    cout << t;
                if (i > 1) // �ж��Ƿ���Ҫ����ݴ�i
                    cout << 'x' << i;
                else if (i == 1) // �ݴ�Ϊ1ʱ����Ҫ����ݴ�
                    cout << 'x';
                first = false;
            }
        }
    }
    if (first) // �����������ʽ��ϵ����Ϊ0�����0
        cout << "0";
    return 0;
}
