#include <stdio.h>

int main ()
{
    float num1;
    float num2;
    
    printf("Nhap so num1 =");
    scanf("%f", &num1);
    printf("Nhap so num2 =");
    scanf("%f", &num2);
    
    printf("Tong = %f\n", num1+num2);
    printf("Hieu = %f\n", num1-num2);
    printf("Tich = %f\n", num1*num2);
    printf("Thuong = %f\n", num1/num2);
    
    return 0;
    
}
