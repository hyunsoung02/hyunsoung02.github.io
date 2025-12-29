# include <stdio.h>
// A+B을 반복하게 출력하기
// 합계를 저장할 배열 정의하기
// 각 테스트 케이스를 만들기(T)

int main ()
{
  int T; 
  scanf("%d",&T);
 int results[100]; // 결과를 저장할 100칸짜리 바구니 (배열)를 만듭니다
  for(int i=0;i<T;i++) // 입력값 반복해서 results 배열 칸에 저장
  {
    int A,B; // 입력할 두 수 정의하기
     scanf("%d %d",&A,&B);
    results[i] = A + B; // 계산 결과를 바구니의 i번째 칸에 저장! results[1][2][3][4]...[N]
   }
    for(int i=0;i<T;i++) //출력값 테스트 케이스 만큼 나오게 하기
    {
     printf("%d\n", results[i]);
    
    }
   
   
 
return 0;
}