#include <iostream>
using namespace std;
int main(void)
{
float f;
scanf("%f", &f);
printf("整数部分: %d\n" , int(f));
printf("小数部分: %f\n",f-int(f));
return 0;
}
