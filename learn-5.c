/**
 * 计算1000元 三种利息 
 */ 

#include<stdio.h>

int main() {
 float r1 = 0.036, r2 = 0.051, r3 = 0.042, principal;
 scanf("%f", &principal);
 printf("存活期一年后获得的本金和利息为: %f \n", principal * (1 + r1));
 printf("存定期一年后获得的本金和利息为: %f \n", principal * (1 + r2));
 printf("存两次半年定期获得的本金和利息为: %f \n", (principal + principal * r3 / 2) * ( 1 + r3 / 2) );
 return 0;
}
