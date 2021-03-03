#include <stdio.h>
#include <errno.h>
#include <string.h>


int main()
{
	//  feof();//EOF文件结束标志

	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
		return 0;

	int ch = fgetc(pf);
	printf("%d\n", ch);

	fclose(pf);
	pf = NULL;

	return 0;
}