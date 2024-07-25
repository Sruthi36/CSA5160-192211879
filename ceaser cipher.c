#include<stdio.h>
#include<ctype.h>
#incude<string.h>
char encrypted_text(char ch,int k){
	char cha;
	if (islower(ch)){
		cha = (ch -  'a' + k)%26 + 'a';
	}
	else{
		cha = (ch - 'A' + k)%26 + 'A';
	}
	ch = cha;
	return ch;
}
int main(){
	char text[100],ch;
	int k;
	printf("Enter text: ");
	fgets(text, sizeof(text), stdin);
	printf("Enter key number: ");
	scanf("%d",&k);
	for (int i=0;i<strlen(text);i++){
		ch = text[i];
		char enc_ch = encrypted_text(ch,k);
		text[i] = enc_ch;
	}
	printf(text);
	return 0;
	
}
