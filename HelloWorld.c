#include <stdio.h>
int main() {
  int x, y, temp;
  // ��������������ֵ
  scanf("%d %d", &x, &y); 
  temp = x;   // Copy һ�� 
  x = y;   // Copy y 
  y = temp;   // ��x�Ŀ�����ֵ��y 
  printf("x = %d, y = %d", x, y);
  return 0;
}
