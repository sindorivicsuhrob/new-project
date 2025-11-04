#include <stdio.h>
int main(void)
{
    int fahr;

    printf("%3s %6s\n","F","C");
    printf("__________\n");

    for(fahr=300;fahr>=0;fahr = fahr-20){
        printf("%3dC %6.1fF\n", fahr,(5.0/9.0)*(fahr-32));
    }
    return 0;
}
