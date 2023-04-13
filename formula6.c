#include<stdio.h>

main()
{
	int x=6,y=4,z=5,a;
	a=x*3-y*3-z*3-3*x*x*y+(3*x*y)*2-3*y*y*z-(3*y*z)*2+(3*x*z)*2-3*x*x*z+6*x*y*z;
	printf("(x-y-z) =%d",a);
}
