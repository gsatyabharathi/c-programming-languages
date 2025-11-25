#include<stdio.h>
int main()
{
	float length,width,area;
	printf("enter lenght & width of rectangle (in cm):");
	scanf("%f%f",&length,&width);
	area=length*width;
	printf("area of rectangle=%.3fcm\n",area);
	return 0;
}




