#include <stdio.h>
int box(int a, int b)///�o�����_���l,��̤j���]��
{   ///�Ѥj,�ѤG
    if(a==0) return b;
    if(b==0) return a;
    return box(b, a%b);
}         ///�ѤG,�ѤT
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = box(a,b);
    printf("%d", ans);
}
