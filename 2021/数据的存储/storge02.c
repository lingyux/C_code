#include<stdio.h>

check_sys()
{
	int a = 1;
	char* p = (char*)&a;
	if (*p == 1)
		return 1;
	else
		return 0;
	//return *p;
	//return *(char*)&a;
}

int main()
{

	int ret = check_sys();
	if (ret == 1)
		printf("小端\n");
	else
		printf("大端\n");

	return 0;
}