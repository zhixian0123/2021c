#include <stdio.h>/// �ʼƱƪk-��ܱƧǪk
int a[100];
int main()
{
	for(int i=0;i<100;i++)/// Input
	{
		scanf("%d", &a[i]);
	}
	for(int i=0;i<100;i++)/// ����i
	{
		for(int j=i+1;j<100;j++)/// �k��j
		{
			if(a[i]>a[j])/// ���,�Ʊ�p������
			{
				int temp=a[i];/// ���F�N�洫
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
