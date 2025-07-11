//_CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 20
#define MAX_IP 16

//enum option {
//	增，
//	删，
//	查，
//	改
//};可以做为main中switch的更改选项

struct peoinfo {
	char name[MAX_NAME];
	
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char ip[MAX_IP];
	peoinfo() = default;
};

struct Contact {//通讯录类型
	struct peoinfo data[MAX];//设置内存
	int size;//记录已有个数
};

inline void Initcon(struct Contact* ps)//初始化通讯录
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;
}
//声明
//void Initcon(struct Contact* ps);
void addat(struct Contact* ps);
void show(struct Contact* ps);
void find(const struct Contact* ps);
void delat(struct Contact* ps);
void modifly(struct Contact* ps);
void sort(struct Contact* ps);