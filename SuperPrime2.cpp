#include <iostream>
class SuperPrime {
private:
  const int left, right;
public:
  SuperPrime(int a, int b):left(a), right(b) {
  }
  int max() {
  	//�ĸ��������� 
    for(int x1 = left; x1 < right; x1++) {
      split(x1);
	  //�ж����� 
	}
	
  	return 0;
  }
  int howmany() {
  	return 0;
  }
  int sum() {
  	return 0;
  }
private:
  void split(int x) {
    int a, sum, mult, sqrsum;
    while(x != 0) {
      a = x % 10;
	  sum += a;
	  mult *= a;
	  sqrsum += a*a;
	  x = x / 10;
	}
  }
};












int main() 
{
  SuperPrime sp(100, 999);
  std::cout << "���ĳ���������" << sp.max() << std::endl;
  std::cout << "��������������" << sp.howmany() << std::endl;
  std::cout << "���������ĺͣ�" << sp.sum() << std::endl;
  return 0;
} 
