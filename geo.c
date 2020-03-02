#include<stdio.h>
#define _USE_MATH_DEFINES
#include<math.h>
void circle (int n,float r,float *p,float*s)
{
	float r2;
	{
		*p = 2 * M_PI * r;
		r2 = pow(r,2);
		*s = M_PI * r2;
	}
}	

int main()
{	
	int n,i,j;
	printf("Введите количество окружностей\n");
	scanf ("%d", &n);
	float X[n],Y[n],R[n],p,s,x,y,d;
	
		for(i=0;i < n;i++)
		{
			printf("%d.Введите координаты центра окржности и его радиус:\n",i);
			printf("X = ");
			scanf ("%f", &X[i]);
			printf("Y = ");
			scanf ("%f", &Y[i]);
			printf("R = ");
			scanf ("%f", &R[i]);
			printf("\n");
			
		}
			
	
			
		for(i=0;i < n;i++)
		{
			float r;
			printf("%d. circle(%f %f, %f)\n ",i,X[i],Y[i],R[i]);
			r = R[i];
			circle(n,r,&p,&s);
			printf("perimeter = %f \n ",p);
			printf("area = %f \n",s);
		}		
			
			for (i = 0;i < n;i++)
			{
				for (j=i+1;j < n;j++)
				{
					
				x = X[i]-X[j];
				y = Y[i]-Y[j];
				d = sqrt(pow(x,2)+pow(y,2));
				if (d<=(R[i]+R[j]))
					printf ("Окржности №%d и №%d пересекаются\n",i,j);
				}
			}
			
	return 0;
}
















































