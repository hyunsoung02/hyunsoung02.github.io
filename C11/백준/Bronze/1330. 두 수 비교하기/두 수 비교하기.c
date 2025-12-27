#include <stdio.h>
//입력된 두 수 비교하기
// 조건문을 사용하기
int main(void) 
{
 int A,B;
 scanf("%d %d",&A,&B);

 if(A<B)
 {
  printf("<\n");
 }
else if (A>B)
{
  printf(">\n");
}
else 
{
  printf("==\n");
}

    return 0;
}
