#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	int i;
	char s[255];
	printf("nhap xâu cân chuân hóa : "); 
	gets(s);
	fflush(stdin);
	while (s[0]==' '){
		strcpy(&s[0],&s[1]);
	}
	while (s[strlen(s)-1]==' '){
		strcpy(&s[strlen(s)-1],&s[strlen(s)]);
	}
	for(i=0; i<strlen(s) ;i++){
		if ((s[i]==' ')&&(s[i+1]==' ')){
			strcpy(&s[i],&s[i+1]);
			i--;
		}
	}
	strlwr(s);
	if(s[0]>97&&s[0]<122){
		s[0]-=32;
	}	
	printf("xau da chuan hoa : \"%s\"",s);
	
	getch();
}
