#include<stdio.h>

float radToDeg (float rad);

int main() {

    float rad;

    printf("Input radian : ");

    scanf("%f",&rad);

    printf("Output degree : %.4f\n",radToDeg(rad));

	return 0;

}
float radToDeg (float rad){
	float deg = (rad/3.1415)*180;
	return deg;
}