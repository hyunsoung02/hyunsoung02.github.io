# include <stdio.h>
int main(void)
{
    long long A,B,C; //1조 까지 가능한 변수형 long long
    scanf("%lld %lld %lld",&A,&B,&C); //long long 사용시 %lld로 사용함
    printf("%lld\n",A+B+C);
return 0;
}