#include <stdio.h>
#include <string.h>
// #define MAX 1000
#include <stdlib.h>
#include <errno.h>
#define DEFAULT_sz 3
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

enum Option
{
	EXIT,//0
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	SAVE
};

typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
} PeoInfo;
// 通讯录类型
typedef struct Contact
{
	struct PeoInfo* data;//存放一个通讯录
	int size;//记录当前已经有的元素个数
	int capacity;//当前通讯录的最大容量
} Contact;


// 声明函数
// 初始化通讯录
void InitContact(struct Contact* ps);
// 添加通讯录
void AddContact(struct Contact* ps);
// 展示通讯录
void ShowContact(const struct Contact* ps);
// 删除指定的联系人
void DelContact(struct Contact* ps);
// 查找指定的联系人
void SearchContact(const struct Contact* ps);
// 修改联系人
void ModifyContact(struct Contact* ps);
// 排序
void SortContact(struct Contact* ps);
// 销毁通讯录，释放内存空间
void DestroyContact(Contact* ps);
// 存储通讯录
void SaveContact(Contact* ps);

// 加载文件中的信息到通讯录
void LoadContact(Contact* ps);