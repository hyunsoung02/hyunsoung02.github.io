#include <stdio.h>
// 윤년이면 1, 아니면 0을 출력
// 윤년은 연도가 4의 배수(100의 배수는 아니여야 한다.)
int main(void) 
{
  int year;
  scanf("%d",&year);
  // (==) = 같다 / (!=) = 다르다 / (=) = 대입하다
  if((year % 4)==0 && (year % 100) != 0 || (year % 400) == 0)
{
    printf("1\n");
}
  else
{
  printf("0\n");
}

    return 0;
}
