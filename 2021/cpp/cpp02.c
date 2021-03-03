#include<stdio.h>

#define message_for(a,b) \
	printf(#a " and " #b ":We love you!")

int main(){

	message_for(Carole,Debra);
	return 0;
}