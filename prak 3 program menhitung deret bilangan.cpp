//*program menhitung deret bilangan*//
//*nama Iqbal Hario Syahputra*//
//*nim 20051397029*//
#include<stdio.h>
#include <conio.h>
using namespace std;

main()
{
	int nilai_a=0,beda,nilai_n,nilai_c,jumlah=0,i;
	printf("Menghitung Deret Bilangan");
	printf("\n");
	printf("bilangan awal= ");
	scanf("%i",&nilai_a);
	printf("nilai beda= ");
	scanf("%i",&beda);
	printf("jumlah deret ke-n=");
	scanf("%i",&nilai_n);
	printf("\n\n");
	printf("deret ke-%i=",nilai_n);
	printf("%i,",nilai_a);
	jumlah = jumlah+nilai_a;
	for (i=0; i<nilai_n-1; i++)
{
nilai_c =nilai_a+beda;
nilai_a=nilai_c;
	printf("%i,",nilai_c);
	jumlah = jumlah +nilai_c;	
}
printf("\n");
printf("jumlah deret ke-%i=",nilai_n);
printf("%i",jumlah);
getch ();
return 0;
	
}


