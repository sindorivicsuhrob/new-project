#include <stdio.h>
int main()
{
    long z;
    z = 0;
    while (getchar()  != EOF )
         ++z;
    printf("подсчет сиволов:%d\n" , z );
    return 0;
}
