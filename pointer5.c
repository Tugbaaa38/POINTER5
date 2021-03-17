#include <stdio.h>
#include <stdlib.h>

//Parametre degiskeni pointer olan fonksiyonlar
//Parametre degiskeni pointer olan fonksiyon yardimi ile faktoriyel bulma;

void Fact(int sayi,long *fak)
{
	*fak=1;
	if(sayi==0 || sayi==1)
	{
		return ;
	}
	
	while(sayi>1)
	{
		*fak*=sayi;
		 sayi--;
	}	
}
int main() {
  int SonSayi,i;
  long f;
  printf("Kaca kadar olan sayilarin faktoriyeli alinsin?=");
  scanf("%d",&SonSayi);
    
  for(i=0;i<=SonSayi;i++)
  {
  	Fact(i,&f);
  	printf("%d!=%d\n",i,f);
  }

	return 0;
}