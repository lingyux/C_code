#include <stdio.h>
#include <errno.h>
#include <string.h>

struct S
{
	int n;
	float score;
	char arr[10];
};

int main()
{
	struct S s = {100, 3.14, "lingyux"};
	struct S tmp = {0};

	char buf[1024] = {0};
	// 把格式化的数据转换成字符串存储到buf
	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
	printf("%s\n", buf);
	// 从buf中读取格式话的数据到tmp
	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), &(tmp.arr));

	printf("%d %.2f %s\n", tmp.n, tmp.score, tmp.arr);

	return 0;
}

// int main()
// {
// 	struct S s = {0};
// 	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), &(s.arr));
// 	printf("%d %.2f %s\n", s.n, s.score, s.arr);

// 	return 0;
// }


// int main()
// {
// 	struct S s = {0};
// 	FILE* pf = fopen("test.txt", "r");
// 	if (pf == NULL)
// 		return 0;
// 	// 格式化的输入文件

// 	fscanf(pf, "%d %f %s", &(s.n), &(s.score), &(s.arr));
// 	printf("%d %.2f %s\n", s.n, s.score, s.arr);
// 	fclose(pf);
// 	pf = NULL;

// 	return 0;
// }


// int main()
// {
// 	struct S s = {100, 3.14f, "bit"};
// 	FILE* pf = fopen("test.txt", "w");
// 	if (pf == NULL)
// 		return 0;
// 	// 格式化的写入文件

// 	fprintf(pf, "%d %.2f %s", s.n, s.score, s.arr);

// 	fclose(pf);
// 	pf = NULL;

// 	return 0;
// }