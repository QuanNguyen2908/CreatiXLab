#include <stdio.h>
#include <string.h>
int main(){
	
	char a[100];
	int demChuThuong=0;
	int demChuHoa=0;
    printf("Nhap vao xau a : ");
    gets(a);
	for(int i=0;i<strlen(a);i++){
		if(a[i]>='a' && a[i]<='z'){
				demChuThuong++;
		}
	}
	for(int i=0;i<strlen(a);i++){
		if(a[i]>='A' && a[i]<='Z'){
			demChuHoa++;
		}
	}
	printf("So ky tu thuong : %d\n",demChuThuong);
	printf("So ky tu hoa : %d",demChuHoa);
}
