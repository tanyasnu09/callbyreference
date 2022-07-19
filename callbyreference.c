#include <stdio.h>
void swap (int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;


}
int main()
{
    int a=34,b=74;
    swap(&a,&b);
    printf("%d%d",a,b);

}