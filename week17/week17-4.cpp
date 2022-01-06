#include <stdio.h> ///Summing Digits
int f(int n) ///step04:函式
{
	int sum=0; ///step03:sum
	while(n>0) ///step02:while一直剝
	{
		sum+=n%10; ///step01:n%10剝皮,step03
		n=n/10; ///step02:n變小
	}
	return sum; ///step03
}
int main()
{
	int n;
	while(scanf("%d", &n)==1) ///step06:while迴圈一直讀
	{
		if(n==0) break; ///step05:遇到0結束
		int ans=f(f(f(n))); ///step04:函式
		printf("%d\n", ans);
	}
}
