#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	int i;
	char s[255];
	printf("nhap xâu : "); 
	gets(s);
	fflush(stdin);
	int j = strlen(s);
	for(i=0; i<strlen(s);i++){
		if(s[i]=='s'&&s[i+1]=='d'&&s[i+2]=='f'){
			s[i]=s[i+3];
			s[i+1]=s[i+4];
			s[i+2]=s[i+5];
			j= j-3;
		}
	}
	char s2[255];
	strncpy(s2, s, j);
	printf("xau da duoc xoa : \"%s\"",s2);
	
	getch();
}
