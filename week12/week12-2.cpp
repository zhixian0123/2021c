#include <stdio.h>/// 百數排法-選擇排序法
int a[100];
int main()
{
	for(int i=0;i<100;i++)/// Input
	{
		scanf("%d", &a[i]);
	}
	for(int i=0;i<100;i++)/// 左手i
	{
		for(int j=i+1;j<100;j++)/// 右手j
		{
			if(a[i]>a[j])/// 比較,希望小的左邊
			{
				int temp=a[i];/// 錯了就交換
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<100;i++)/// Output
	{
		printf("%d\n", a[i]);
	}
}
