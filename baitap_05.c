#include <stdio.h>

int main ()
{
    float top;
    float bottom;
    float height;
    
    printf("Top:");
    scanf("%f", &top);
    printf("Bottom:");
    scanf("%f", &bottom);
    printf("Height:");
    scanf("%f", &height);
    
    printf("Paralellogram's area = %f\n", ((top+bottom)*height)/2);
    
    return 0;
}
