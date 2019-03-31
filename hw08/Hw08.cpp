#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s[256];
	printf("nhap chuoi can dao : ");
	gets(s);
	for(int i=strlen(s);i>=0;i--){
		printf("%c",s[i]);
	}

}
