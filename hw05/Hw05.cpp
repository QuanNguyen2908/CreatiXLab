#include <stdio.h>

void kiem_tra_nam_nhuan(int years){
   	if (((years % 4 == 0) && (years % 100!= 0)) || (years %400 == 0)){
      printf("%d la mot nam nhuan", years);
      }
   else{
      printf("%d khong phai la nam nhuan", years);
      }
   }
   
int main() {
   int year;
   int date;
   int month;
	printf("Nhap ngay :");
	scanf("%d",&date);
	printf("Nhap thang :");
	scanf("%d",&month);
	printf("Nhap nam :");
	scanf("%d",&year);
   	if(date<=31 &&month<=12){
		kiem_tra_nam_nhuan(year);
	}else{
		printf("Nhap sai ngay thang!!!!");
	}
}

