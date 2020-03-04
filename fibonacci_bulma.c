#include<stdio.h>
void fib(int x)
{
	int i,dizi[x+1];
	dizi[0]=1; dizi[1]=1;
	for(i=1;i<=x;i++)
	{
		dizi[i+1]=dizi[i]+dizi[i-1];
	}
	printf("%d siradaki fibonacci sayisi %d ",x+1,dizi[x]);
}
int main()
{
	int a;
	printf("Kacinci siradaki fibonacci sayisini istediiginizi girin:");
	scanf("%d",&a);
	fib(a-1);
	
	return 0;
	getchar();
}
