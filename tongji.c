#include "student.h"

int iScoreHigh[subCount];  //��Ÿ���Ŀ��߷�
int iScoreLow[subCount];  //��Ÿ�����ͷ�
int iScoreAve[subCount];	//��Ÿ���Ŀƽ����
int iHighNo[subCount];	//�����߷�ѧ��ѧ��
int iFineCount[subCount];	//��Ÿ���Ŀ�ﵽ����ѧ��������
int iFailCount[subCount];	//��Ÿ��Ʋ���������

void shuju()
{
	GetHigh();
	printf("\n");
	GetLow();
	printf("\n");
	GetAve();
	person1();
	person2();
	person3();
	person4();
	person5();
}

void GetHigh()
{
	int i;
	int max=Computer[0];
	int max1=Math[0];
	int max2=English[0];
	int max3=Chinese[0];
	int max4=Physics[0];

	iHighNo[0] = StuNo[0];iHighNo[1] = StuNo[0];iHighNo[2] = StuNo[0];iHighNo[3] = StuNo[0];iHighNo[4] = StuNo[0];
	for(i=0;i+1<stuCount;i++)  //ȡ���ֵ
	{
			if(max<Computer[i+1])
			{
				max=Computer[i+1];
				iScoreHigh[0] = max;
				iHighNo[0] = StuNo[i+1];
			}
			if(max1<Math[i+1])
			{
				max1=Math[i+1];
				iScoreHigh[1] = max1;
				iHighNo[1] = StuNo[i+1];
			}
			if(max2<English[i+1])
			{
				max2=English[i+1];
				iScoreHigh[2] = max2;
				iHighNo[2] = StuNo[i+1];
			}
			if(max3<Chinese[i+1])
			{
				max3=Chinese[i+1];
				iScoreHigh[3] = max3;
				iHighNo[3] = StuNo[i+1];
			}
			if(max4<Physics[i+1])
			{
				max4=Physics[i+1];
				iScoreHigh[4] = max4;
				iHighNo[4] = StuNo[i+1];
			}
	}

	printf("�������߷�Ϊ%d\n",max);
	printf("��ѧ��߷�Ϊ%3d\n",max1);
	printf("Ӣ����߷�Ϊ%3d\n",max2);
	printf("������߷�Ϊ%3d\n",max3);
	printf("������߷�Ϊ%3d\n",max4);
}

void GetLow()
{
	int min=Computer[0];
	int min1=Math[0];
	int min2=English[0];
	int min3=Chinese[0];
	int min4=Physics[0];
	int i;

	iScoreLow[0]=min;iScoreLow[1]=min1;iScoreLow[2]=min2;iScoreLow[3]=min3;iScoreLow[4]=min4;
	for(i=0;i+1<stuCount;i++)  //ȡ��Сֵ
	{
		if(min>Computer[i+1])
		{
			min=Computer[i+1];
			iScoreLow[0] = min;
		}
		if(min1>Math[i+1])
		{
			min1=Math[i+1];
			iScoreLow[1] = min1;
		}
		if(min2>English[i+1])
		{
			min2=English[i+1];
			iScoreLow[2] = min2;
		}
		if(min3>Chinese[i+1])
		{
			min3=Chinese[i+1];
			iScoreLow[3] = min3;
		}
		if(min4>Physics[i+1])
		{
			min4=Physics[i+1];
			iScoreLow[4] = min4;
		}
	}

	printf("�������ͷ�Ϊ%d\n",min);
	printf("��ѧ��ͷ�Ϊ%3d\n",min1);
	printf("Ӣ����ͷ�Ϊ%3d\n",min2);
	printf("������ͷ�Ϊ%3d\n",min3);
	printf("������ͷ�Ϊ%3d\n",min4);
}

void GetAve()
{
	int i;
	int sum=0,sum1=0,sum2=0,sum3=0,sum4=0;

	for (i=0;i<stuCount;i++)
	{
		sum=sum+Computer[i];
		sum1=sum1+Math[i];
		sum2=sum2+English[i];
		sum3=sum3+Chinese[i];
		sum4=sum4+Physics[i];
	}
	iScoreAve[0] = sum/stuCount;
	iScoreAve[1] = sum1/stuCount;
	iScoreAve[2] = sum2/stuCount;
	iScoreAve[3] = sum3/stuCount;
	iScoreAve[4] = sum4/stuCount;

	printf("����� ��ѧ Ӣ�� ���� ����ƽ����Ϊ��\n");
	printf("%3d%3d%3d%3d%3d",sum/stuCount,sum1/stuCount,sum2/stuCount,sum3/stuCount,sum4/stuCount);
}

void person1()
{
	int i, a = 0, b = 0;
	for (i = 0; i < stuCount; i++)
	{
		if(Computer[i] >= 90)
			a++;
		else if(Computer[i] < 60)
			b++;
	}
	printf("\n\n\n�������������Ϊ%d,����������Ϊ%d\n", a, b);
	iFineCount[0] = a;
	iFailCount[0] = b;
}

void person2()
{
	int i, a = 0, b = 0;
	for (i = 0; i < stuCount; i++)
	{
		if(Math[i] >= 90)
			a++;
		else if(Math[i] < 60)
			b++;
	}
	printf("��ѧ��������Ϊ%d,  ����������Ϊ%d\n", a, b);
	iFineCount[1] = a;
	iFailCount[1] = b;
}

void person3()
{
	int i, a = 0, b = 0;
	for (i = 0; i < stuCount; i++)
	{
		if(English[i] >= 90)
			a++;
		else if(English[i] < 60)
			b++;
	}
	printf("Ӣ����������Ϊ%d,  ����������Ϊ%d\n", a, b);
	iFineCount[2] = a;
	iFailCount[2] = b;
}

void person4()
{
	int i, a = 0, b = 0;
	for (i = 0; i < stuCount; i++)
	{
		if(Chinese[i] >= 90)
			a++;
		else if(Chinese[i] < 60)
			b++;
	}
	printf("������������Ϊ%d,  ����������Ϊ%d\n", a, b);
	iFineCount[3] = a;
	iFailCount[3] = b;
}

void person5()
{
	int i, a = 0, b = 0;
	for (i = 0; i < stuCount; i++)
	{
		if(Physics[i] >= 90)
			a++;
		else if(Physics[i] < 60)
			b++;
	}
	printf("������������Ϊ%d,  ����������Ϊ%d\n", a, b);
	iFineCount[4] = a;
	iFailCount[4] = b;
}
