///輾轉相除法,把過程印出來
///3 | 57 | 76 | 1 //大的a,除中的b,得到小的c
///  | 57 | 57 |   //老大換人,老二換人,重複
/// --------------
///     0   19  口訣: 除法, 餘數, 輾轉重複做,到0
#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int c=a&b;
    printf("老大:%d 老二:%d 老三:%d\n", a, b, c);
    while(1)
    {
        if(c==0)
        {
            printf("因為c是0,就break離開迴圈\n");
            break;///離開迴圈
        }
        a=b;///老大換人
        b=c;///老二換人
        c=a%b;///老三換人
        printf("老大:%d 老二:%d 老三:%d\n", a, b, c);
    }
    printf("離開迴圈後,答案是b: %d \n", b);
}

