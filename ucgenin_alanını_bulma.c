#include<stdio.h>
int islem(int a,int b)	//ucgenin alan�n� hesaplayan temel bir fonksiyon yaz�ld�
{
	return  (a*b)/2;
}
int main()
{
	int h,t;
	printf("Ucgenin Tabanini Girin:"); scanf("%d",&t);	//kullan�c� taraf�ndan ucgenin taban� ve y�ksekli�i al�nd�
	printf("Ucgenin Yuksekligini Girin:"); scanf("%d",&h);
	printf("\n\n");
	printf("Ucgenin Alani:%d",islem(h,t));	//fonksiyon �a��r�larak ucgenin alan� bulundu

}
