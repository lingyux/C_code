#include <stdio.h>
#include <errno.h>
#include <string.h>

struct S
{
	char name[20];
	int age;
	double score;
};

int main()
{
	struct S tmp = {0};

	FILE* pf = fopen("test.txt", "rb");
	if (pf == NULL)
		return 0;

	fread(&tmp, sizeof(struct S), 1, pf);

	printf("%s %d %.2lf\n", tmp.name, tmp.age, tmp.score);
	fclose(pf);
	pf = NULL;

	return 0;
}
// int main()
// {
// 	struct S s = {"lingyux", 22, 3.14};

// 	FILE* pf = fopen("test.txt", "wb");
// 	if (pf == NULL)
// 		return 0;

// 	fwrite(&s, sizeof(struct S), 1, pf);

// 	fclose(pf);
// 	pf = NULL;

// 	return 0;
// }