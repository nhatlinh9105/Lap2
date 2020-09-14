#include <stdio.h>
#define PI 3.14
int main()
{
    float a; // chiều dài
    float b; // chiều rộng
    
    printf("Tinh dien tich va chu vi hcn\n");
    printf("Nhap hieu dai:");
    scanf("%f", &a);
    printf("Nhap chieu rong:");
    scanf("%f", &b);
    printf("Dien tich hcn = %f\n", a*b);
    printf("Chu vi hcn = %f\n", (a+b)*2);
    
    float c; // cạnh hình vuông
    printf("Tinh dien tich va chu vi hv\n");
    printf("Nhap chieu dai canh hv:");
    scanf("%f", &c);
    printf("Dien tich hv = %f\n", c*c);
    printf("Chu vi hinh vuong = %f\n", c*4);
    
    float r; // bán kính đường tròn
    printf("Tinh dien tich va chu vi hinh tron\n");
    printf("Nhap ban kinh:");
    scanf("%f", &r);
    printf("Dien tich hinh tron = %f\n", PI*r*r);
    printf("Chu vi hinh tron = %f\n", 2*PI*r);
    
    return 0;
          
}
