///3 | 57 | 76 | 1 //�j��a,������b,�o��p��c
///  | 57 | 57 |   //�Ѥj���H,�ѤG���H,����
/// --------------
///     0   19  �f�Z: ���k, �l��, ���୫�ư�,��0
#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int c=a&b;
    while(1)
    {
        if(c==0) break;
        a=b;
        b=c;
        c=a%b;
    }
    printf("%d", b);
}
