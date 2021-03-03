#include <stdio.h>

int check_sys()
{
	union Un
	{
		char c;
		int i;
	};
	union Un u;
	u.i = 1;
	return u.c;
	// 返回1代表小端，否则为大端
}



int main()
{
	// int a = 1;
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}

	return 0;
}