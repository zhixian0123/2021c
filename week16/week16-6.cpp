#include <stdio.h>
#include <string.h>
char line[300]="101010110100101010101";
int main()
{
    int ans=0;
    int N=strlen(line);
    for(int i=0;i<N;i++)
    {
        if(line[i]=='1') ans++;
    }
    printf("��%d��1\n",ans);
}
