#include<stdio.h>

int UCLN(int a, int b) {
   int  i, hcf;


   for(i = 1; i <= a || i <= b; i++) {
   if( a%i == 0 && b%i == 0 )
      hcf = i;
   }
   printf("USCLN = %d\n", hcf);
}

int BCNN(int a , int b) {
   int max, step, lcm;
   lcm = 0;

   if(a > b)
      max = step = a;
   else
      max = step = b;

   while(1) {
      if(max%a == 0 && max%b == 0) {
         lcm = max;
         break;    
      }
      max += step;
   }
   printf("BSCNN = %d", lcm);
}

int main(){
	int a, b;
	printf("nhap so a :");
	scanf("%d",&a);
	printf("nhap so b :");
	scanf("%d",&b);
	UCLN(a,b);
	BCNN(a,b);
}
