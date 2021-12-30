#include <stdio.h>
int main()
{
	int n;///for(int i=0;i<n;i++)
	scanf("%d", &n);
	int i=0;
	while(i<n)///¦L¥¿¤è§Î 7x7 nxn
              ///for(int k=0;k<n;k++)
	{
		int k=0;
		while(k<n)
		{
			if(k<n-i-1) printf(" ");
			else printf("*");
			k++;
		}
		int space=n-i-1;///printf("%d %d\n"),space,i);
		printf("\n");
		i++;
	}
}
