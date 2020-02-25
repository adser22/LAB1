#include<stdio.h>
#define _USE_MATH_DEFINES
#include<math.h>
float circle (float x,float y,float r,float *p,float*s)
{
	float r2;
	*p = 2 * M_PI * r;
	r2 = pow(r,2);
	*s = M_PI * r2;
	return 0;
}	

int main()
{	
	int n;
	int i;
	printf("Введите количество окружностей\n");
	scanf ("%d", &i);
	n = 3*i;
	float C[1000];
		int j = 1;
		float x,y,r,p,s;
		for(i=0;i <= n;i++)
		{
			printf("Введите координаты центра окржности и его радиус:\n");
			printf("X = ");
			scanf ("%f", &C[i]);
			x = C[i];
			i++;
			printf("Y = ");
			scanf ("%f", &C[i]);
			y = C[i];
			i++;
			printf("R = ");
			scanf ("%f", &C[i]);
			r = C[i];
			i++;
			printf("\n");
			circle(x,y,r,&p,&s);
			printf("%d. circle(%f %f, %f)\n ",j,x,y,r);
			printf("perimeter = %f \n ",p);
			printf("area = %f \n",s);
			j++;
		}
	
	return 0;
}
















































