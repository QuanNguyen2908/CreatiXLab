#include <stdio.h>
#include <conio.h>
#include <math.h>
 
int main()
{
    float TotalKm;
    float Cost = 0;
 
    printf("\n Nhap vao so Km: ");
    scanf("%f", &TotalKm);
    if(TotalKm <= 1)
    {
        Cost = TotalKm * 10000;
    }
    else if(TotalKm <= 30 && TotalKm > 1)
    {
    	double n = (double) (TotalKm - 1)/0.2;
        Cost = (ceil(n))*1500 + 1*10000;
    }
    else
    {
        Cost = 1*10000 + 29*7500 + (TotalKm - 30)*8000;
    }
    printf("\n So tien phai tra: %0.1f VND", Cost);
    getch();
}
