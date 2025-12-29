# include <stdio.h>
// 영수증에 적인 총 금액 X
// 영수증에 적인 물건의 종류의 수 N
// 구매한 물건의 가격과 개수로 계산한 총 금액이 영수증에 적힌 총 금액과 일치하면 Yes를 출력한다. 일치하지 않는다면 No를 출력한다.
// 반복문을 사용해서 계속 물건의 가격만큼 더하기
// 마지막의 총액을 비교해서 yes 또는 no가 나오게 하기

int main (void)
{
  int X; //영수증에 적인 총 금액
  int N; //영수증에 적인 구매한 물건의 종류의 수
    scanf("%d", &X); // 총 금액 입력
    scanf("%d", &N); // 물건 종류 수 입력
  int Total=0;
  
for(int i=0;i<N;i++)
{
  int a,b; //구입한 물건의 가격과 갯수
  scanf("%d %d",&a,&b);
 
  // 입력받은 즉시 물건 가격(a*b)을 Total에 계속 더하기
        Total = Total + (a * b);

}
if(X==Total)
{
  printf("Yes\n");
}
else
printf("No\n");

  return 0;

}