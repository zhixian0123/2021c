///�̤j���]��
///�ϥ�for�j��h�ե������Ʀr
///�ݯण���a��b���㰣, �O����,�N�O�i�H���������]��
///���̤j������,�s�̤j���]��
/// 369      3
///----- = -----
/// 123      1
#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    ///�̤j���]��: �i�H�㰣���̤j�����ӼƦr
    int ans=1;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0 && b%i==0) ans=i;
    }
    printf("%d", ans);
}

