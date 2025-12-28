#include <stdio.h>
// 주사위 세개 게임
// 조건문 사용하기
// 상금의 조건 1. 세개 수가 같은 수 2. 두개의 수만 같은 수 3.다 다른 수
int main(void) 
{
int num_1,num_2,num_3; //세개의 수 선언
scanf("%d %d %d",&num_1,&num_2,&num_3 );


  if(num_1==num_2 && num_2==num_3) //조건 1: 모든 수가 같다면?
{
  printf("%d\n", 10000 + num_1 * 1000);
}
else if(num_1 == num_2 || num_1 == num_3 || num_2 == num_3) //조건 1: 두개의 수만 같다면?
  {
     int ret=0;
    if(num_1 == num_2 || num_1 == num_3 ) //1과 2가 동일 1과 3이 동일
    {
    ret=1000+num_1*100;
  
    }
    else  //1과 3이 동일 또는 2와 3이 동일
    {
    ret=1000+num_3*100;
      
    }
    printf("%d\n",ret);
    
  }
 else //조건 1: 다 다르다면?
  {
    int max=0;
    if(num_1>num_2 && num_1>num_3) //첫번쨰 수가 가장 클 경우
    {
      max= num_1;
    }
    else if (num_2>num_1 && num_2>num_3) //두번쨰 수가 가장 클 경우
    {
      max= num_2;
    }
    else //세번쨰 수가 가장 클 경우
    {
      max= num_3;
    }
    printf("%d\n",max*100);
  }

  return 0;
}
