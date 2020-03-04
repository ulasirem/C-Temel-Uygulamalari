#include<stdio.h>
int k(int x)	//her bir kenarýn karesi alýnmak icin yazýlan fonksiyon 
{
	return x*x;
}
void ucg(int a,int b,int c)	
{
	if(k(a)==k(b)+k(c) || k(b)==k(a)+k(c) || k(c)==k(a)+k(b)) // a*a=b*b+c*c mantýgýna uyup uymadýgý test edilir
	{
		printf("Bu Ucgen Dik Bir Ucgendir.");
	}
	else
	    printf("Ucgenn Dik Degildir.");
}
int main()
{
	int x,y,z;
	printf("ucgenin ilk kenarini girin:"); scanf("%d",&x);	//ucgenin uc kenari kullanici tarafindan alinir
	printf("ucgenin ikinci kenarini girin:"); scanf("%d",&y);
	printf("ucgenin ucuncu kenarini girin:"); scanf("%d",&z);
	ucg(x,y,z);
	
	return 0;
	getchar();
}
