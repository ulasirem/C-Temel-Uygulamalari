#include<stdio.h>
int islem(int a,int b)	//ucgenin alanýný hesaplayan temel bir fonksiyon yazýldý
{
	return  (a*b)/2;
}
int main()
{
	int h,t;
	printf("Ucgenin Tabanini Girin:"); scanf("%d",&t);	//kullanýcý tarafýndan ucgenin tabaný ve yüksekliði alýndý
	printf("Ucgenin Yuksekligini Girin:"); scanf("%d",&h);
	printf("\n\n");
	printf("Ucgenin Alani:%d",islem(h,t));	//fonksiyon çaðýrýlarak ucgenin alaný bulundu

}
