# include <stdio.h>
// 구구단 만들기
// 입력값의 1부터 9를 곱한 값을 출력한다
// 반복된 출력이 끝나면 종료한다
int main ()
{
  int N;
  scanf("%d",&N); 

  for(int i=1;i<=9;i++) //입력값을 1부터 9까지 곱한 걸 반복한다.
  {
    printf("%d * %d = %d\n", N, i, N * i);
  }

return 0;
}