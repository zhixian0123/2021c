#include <stdio.h> ///Summing Digits
int f(int n) ///step04:�禡
{
	int sum=0; ///step03:sum
	while(n>0) ///step02:while�@����
	{
		sum+=n%10; ///step01:n%10���,step03
		n=n/10; ///step02:n�ܤp
	}
	return sum; ///step03
}
int main()
{
	int n;
	while(scanf("%d", &n)==1) ///step06:while�j��@��Ū
	{
		if(n==0) break; ///step05:�J��0����
		int ans=f(f(f(n))); ///step04:�禡
		printf("%d\n", ans);
	}
}
