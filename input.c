#include "student.h"

int InputData()
{
	int i;
	int flag = 0;   //用于判别输入操作符的标志

	system("cls");
	for(i=0;i<stuCount;i++)
	{
		printf("请输入第%d位学生学号:",i+1);
		scanf("%d",&StuNo[i]);
	}
	printf("学号录入完成！\n");
	flag = 6;
	for(i=0;i<stuCount;i++)
	{
		if(StuNo[i]==StuNo[i+1])
		{
			printf("你输入的学号有重复!");
			flag = 0;
		}
		break;
	}
	if(flag == 6)
		return 1;
	else 
	{
		fflush(stdin);
		return 0;
	}	
}

//录入学生成绩。
void stuscore()
{
	int i;

	printf("请按照如下顺序输入学生成绩：\n");
	printf("计算机 数学 英语 语文 物理\n");
	for(i=0;i<stuCount;i++)
	{
		scanf("%d%d%d%d%d",&Computer[i],&Math[i],&English[i],&Chinese[i],&Physics[i]);
		printf("请检查输入是否正确!若错误则重新输入成绩!\n");
	}
	printf("学生成绩录入完成!\n");
}
