/**
 *  摄氏度转华氏度 create by afterloe on 2017-10-01 
 */ 

#include <stdio.h>

int main() {

 float translateToFahrenheit(float centigrade);
 float centigrade;
 scanf("%f", &centigrade);
 printf("translate to fahrenheit is %f", translateToFahrenheit(centigrade));
 return 0;
}

float translateToFahrenheit(float centigrade) {
 return centigrade * 9 / 5 + 32;
}
