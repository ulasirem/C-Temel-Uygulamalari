#include<stdio.h>
struct koordinant{	//her bir kenar icin x y koordinatýný goruruz
	int x,y	;
}kose[3];

int main()
{
	int i;
	for(i=0;i<3;i++)	//ucgenin uc köþesinin sýrayla koordinatlarýný alýr
	{
	  printf("%d. ucgenin koordinant (x,y)",i+1); 	//sýrayla x,y koordinatlarýný alýr
	  scanf("%d",&kose[i].x); scanf("%d",&kose[i].y);	
	}
	
	int u1x=(kose[0].x-kose[1].x);	//koordinatlari verilen koselerin arasýndaki mesafeleri x,y koordinatina gore hesaplar
	int u1y=(kose[0].y-kose[1].y);
	
	int u2x=(kose[1].x-kose[2].x);
	int u2y=(kose[1].y-kose[2].y);
	
	int u3x=(kose[2].x-kose[0].x);
	int u3y=(kose[2].y-kose[0].y);
	
	int a=(u1x*u1x+u1y*u1y); 	//a*a=b*b+c*c mantýgýndan yararlanarak a*a ya a,b*b ye b,c*c ye c dedik
	int b=(u2x*u2x+u2y*u2y);
	int c=(u3x*u3x+u3y*u3y);
	
	if(a==b+c || b==a+c || c==a+b)	// dik bir ucgen olup olmadýgý test edilir
	{
		printf("Bu bir dik ucgendir.");
	}
	else
	    printf("Dik ucgen degildir.");
	
	
	return 0;
	getchar();
}
