# include <stdio.h>
//  n이 주어졌을 때, 1부터 n까지 합을 구하기
// 반복문 (for)문 사용하기
int main (void)
{
  int n; //입력할 정수형 변수 선언
  int sum=0; //출력할 합계 정수형 변수 선언
  scanf("%d",&n);
  
  for(int i=0;i<=n;i++) //기존의 합계(sum)에 현재 숫자(i)를 더해 다시 sum에 저장
  {
    sum=sum+i;
  }

   
  printf("%d\n",sum);

  return 0;

}