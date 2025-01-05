#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char a[100] = "Hello my gmail is test123@gmail.com";
	int chucai = 0, chuso = 0;
	for(int i; i<strlen(a); i++){
		if(isalpha(a[i])) ++chucai;
		else if(isdigit(a[i])) ++chuso;
    }
    printf("%d %d %d", chucai , chuso, strlen(a)-chucai-chuso);
	return 0;
}

	
	
