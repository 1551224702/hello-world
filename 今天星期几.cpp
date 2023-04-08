#include <iostream>
#include<stdio.h> 
#include <string>
using namespace std;
 
string week[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
 
struct Calendar{
    int year;
    int month;
    int day;
    int weekday;//注：星期天为0，星期一为1，...，星期六为6；01-1-1为星期四
    int fromInitDays();
    void setValue(int y,int m,int d);
    void show();
 
};
int main()
{
    Calendar birthday;
    int y,m,d;
    cin>>y>>m>>d;
    birthday.setValue(y,m,d);
    birthday.fromInitDays();
    birthday.show();
    return 0;
}
int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
 
bool leap(int x)
{
    if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0) return 1;
    return 0;
}
 
int Calendar::fromInitDays() //计算天数, 初始化星期几
{
    int sum = 0;  
 
 //年份
    for (int i = 1; i < this->year; i ++ ) 
        if (leap(i)) sum += 366;
        else sum += 365;  
 
 //月份
    for (int i = 1; i < this->month; i ++ )
        sum += days[i];  
 
 //天数
    sum += this->day - 1;  
 
 //当年为润年   sum+1;
    if (leap(this->year) && this->month > 2) sum ++ ;  
 
 //判断是否在1582.10.4之后, 如果是, 则减10天;
    if (this->year > 1582 || this->year == 1582 && this->month > 10|| this->year == 1582 && this->month == 10 && this->day > 4)
        sum -= 10;  
 
 //计算星期几
    this->weekday = (4 + sum) % 7;  
 
 //返回结果
    return sum ;
}
void Calendar::setValue(int y, int m, int d)
{
    if (y < 1) y = 1;
    this->year = y;
 
    if (m < 1) m = 1;
    if (m > 12) m = 12;
    this->month = m;
 
    if (d < 1) d = 1;
    if (d > 31) d = 31;
    this->day = d;
}
 
void Calendar::show()
 
{
    printf("%s", week[this->weekday].c_str());
}
 
