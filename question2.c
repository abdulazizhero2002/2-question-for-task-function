#include <stdio.h>
#include <math.h>
int sum(int a,int b);
int subtract(int a,int b);
int mult(int a,int b);
int mod(int a,int b);
int main()
{
	int a,b;
	printf("1-sonni kiriting: ");
	scanf("%i",&a);
	printf("2-sonni kiriting: ");
	scanf("%i",&b);
	printf("%i+%i=%i\n",a,b,sum(a,b));
	printf("%i-%i=%i\n",a,b,subtract(a,b));
	printf("%i*%i=%i\n",a,b,mult(a,b));
	printf("%i ni %i ga qoldiqli bo'lsa Javob: %i\n",a,b,mod(a,b));
	return 0;
}
int sum(int a,int b)
{return a+b;}
int subtract(int a,int b)
{return a-b;}
int mult(int a,int b)
{return a*b;}
int mod(int a,int b)
{return a%b;}
