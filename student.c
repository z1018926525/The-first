#include "student.h"

int StuNo[stuCount];
int Computer[stuCount];
int Math[stuCount];
int English[stuCount];
int Chinese[stuCount];
int Physics[stuCount];

int iScoreHigh[subCount];
int iScoreLow[subCount];
int iScoreAve[subCount];
int iHighNo[subCount];
int iFineCount[subCount];
int iFailCount[subCount];

int Menuselect()
{
	int option;
	int input;

	system("cls");
	printf("\n\n\n*****************************\n");
	printf("请按照数字逐个运行程序!\n");
	printf("\t1. 录入学生学号\n");
	printf("\t2. 录入学生成绩\n");
	printf("\t3. 统计各门课程的最高分、最低分和平均成绩及各门课程达到优秀和不及格的人数\n");
	printf("\t4. 各科成绩排序\n");
	printf("\t5. 显示学生成绩统计表\n");
	printf("\t6. 显示学生成绩排序\n");
	printf("\t0. 程序结束!\n");
	printf("*****************************\n");
	printf("请输入你要运行的程序前的数字：");

	while(1)
	{
		input = scanf("%d", &option);
		if(input!=1)
		{
			printf("\n\t输入错误，重选:");
			fflush(stdin);
		}
		else if(option == 0) break;
		else if((option < 1)|| (option>6))
			printf("\n\t 选择错误，重选");
		else break;
	}

	return option;
}

int MenuHandle(int option)
{
	int quit = 0;
	switch(option)
	{
		case 1:if(InputData()==0)
			   {
				   printf("程序退出,请重新运行该程序!\n");
				   fflush(stdin);
				   quit = 1;
			   }
			else printf("\n 完成数据输入，按任意键继续....");
			getche();
			break;
		case 2:stuscore();
			printf("\n 完成数据输入，按任意键继续....");
			getche();
			break;
		case 3:shuju();
			printf("\n 完成分数统计，按任意键继续....");
			getche();
			break;
		case 4:paixu();
			printf("\n 完成各科成绩排序 ,按任意键继续....");
			getche();
			break;
		case 5:DispalyStat();
			printf("\n 按任意键继续....");
			getche();
			break;
		case 6:DispalySort();
			printf("\n 按任意键继续....");
			getche();
			break;
		case 0:quit=1;
			break;
	}

	return quit;
}

void main()
{
	int option;
	int quit;

	printf("\n\n\n\n");
	printf("\t\t**********************************************\n");
	printf("\t\t*                                            *\n");
	printf("\t\t*                                            *\n");
	printf("\t\t*                                            *\n");
	printf("\t\t*        学生管理程序                        *\n");
	printf("\t\t*                                            *\n");
	printf("\t\t*                                            *\n");
	printf("\t\t*                        按任意键继续...     *\n");
	printf("\t\t*                                            *\n");
	printf("\t\t*                                            *\n");
	printf("\t\t*                                            *\n");
	printf("\t\t**********************************************\n");
	getche();
	while(1)
	{
		option=Menuselect();
		quit=MenuHandle(option);
		if(quit == 1) break;
	}
}


