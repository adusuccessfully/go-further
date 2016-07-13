#include <stdio.h>

void mian()
{
  printf("helloworld!!!");
}

roundingNum(int x)
{
  double x = 3.1159;
  double result = floor(x * pow(10.0, 2.0) + 0.5)/pow(10.0, 2.0);
  printf("%f四舍五入精确到小数点后两位为：%f\n",x,result);
}

