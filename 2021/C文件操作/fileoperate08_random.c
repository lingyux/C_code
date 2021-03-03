#include <stdio.h>
#include <errno.h>
#include <string.h>


int main()
{
	FILE* pf = fopen("tet.txt", "r");
	if (pf == NULL)
		return 0;
	// 定位文件指针
	fseek(pf, 4, SEEK_SET);

	int pos = ftell(pf);
	printf("%d\n", pos);

	rewind(pf);
	pos = ftell(pf);
	printf("%d\n", pos);

	fclose(pf);
	pf = NULL;
	return 0;
}


// int main()
// {
// 	FILE* pf = fopen("tet.txt", "r");
// 	if (pf == NULL)
// 		return 0;
// 	// 定位文件指针
// 	fseek(pf, 4, SEEK_SET);
// 	// 读取文件
// 	char ch = fgetc(pf);
// 	printf("%c\n", ch);

// 	fclose(pf);
// 	pf = NULL;
// 	return 0;
// }