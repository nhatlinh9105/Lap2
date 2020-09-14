#include <stdio.h>
int main ()
{
    float Toan;
    printf("Nhập điểm Toán:");
    scanf("%f", &Toan);
    
    float Ly;
    printf("Nhập điểm Lý:");
    scanf("%f", &Ly);
    
    float Hoa;
    printf("Nhập điểm Hoá:");
    scanf("%f", &Hoa);
    
    printf("Tong diem: %f\n", Toan + Ly + Hoa);
    printf("Diem trung binh: %f", (Toan + Ly + Hoa)/3);
    
    return 0;
}

    
        
