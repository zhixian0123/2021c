#include <stdio.h>///a[]是個大表格
int a[10000000]={0, 0, 0, 0};
int main()
{
    int ans=0;
    for(int i=2;i<10000000;i++)///找出沒被殺掉的質數
    {                     ///查查看他有沒有被殺死
        if( a[i]==0 )
        {
            ans++;
            for(int k=i+i;k<10000000;k=k+i) a[k]=1;
        }
    }
    printf("ans: %d", ans);
}
