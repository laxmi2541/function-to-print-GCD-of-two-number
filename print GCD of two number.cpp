#include<stdio.h>
int gcd(int a,int b);
int gcd(int a,int b)
{
	int rem;
	while(b!=0)
	{
		rem=(b!=0);
		a=b;
		b=rem;
	}
	return a;
}
int main()
{
	int x,y,g;
	printf("Enter two number");
	scanf("%d%d",&x,&y);
	g=gcd(x,y);
	printf("GCD of %d and %d is %d",x,y,g);
	return 0;
}

