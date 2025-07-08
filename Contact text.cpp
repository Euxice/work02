#include "tx.h"
//通讯录功能，
//1.存放信息
//其中一个信息应该包括姓名、电话、地址等。
//2.增加好友信息
//3.删除指定信息
//4.查找指定好友信息
//5.修改
//6.打印所有信息
void zcd() {
	printf("*****************************************\n");
	printf("*** 1 .add                   2.del   ****\n");
	printf("*** 3 .find                  4.modify ***\n");
	printf("*** 5 .show                  6.sort  ****\n");
	printf("****0.exit                          *****\n");
	printf("*****************************************\n");
}

int main()
{
	int a = 0;
	//int size = 0;//记录当前通讯录信息个数
	////scanf_s("%d", &a);
	//struct peoinfo con[MAX];//可合并
	struct Contact con;//合并之后
	Initcon(&con);
	do {
		zcd();
		/*scanf_s("%d", &a);*/
		cin >> a;
		//cin.ignore();//清空缓冲区
		switch (a)
		{
			case 1:
				/*addat(con,&size);*/
				addat(&con);
				break;
			case 2:
				delat(&con);
				break;
			case 3:
				find(&con);
				break;
			case 4:
				modifly(&con);
				break;
			case 5:
				show(&con);
				break;
			case 6:
				//sort(&con);
				break;
			case 0:
				printf("退出\n");
				
				break;
			default:
				printf("输入错误，请重新输入！\n");
				break;
		}
		/*cin.ignore();*///清空缓冲区
		//system("cls");//清屏
	} while (a);
	return 0;
}