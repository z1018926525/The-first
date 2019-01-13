#include "student.h"

char *cSubject[subCount] = {"计算机","数  学","英  语","语  文","体  育"};

void paixu()
{
	SortByAve();
}

void SortByAve()
{
	int i, j, temp;
	char tmp;

	for (i = 0; i < stuCount; i++)
	{
		for(j = 0; j < stuCount-i-1; j++)
		{
			if(iScoreAve[j] < iScoreAve[j+1])
			{
				temp = iScoreAve[j];
				iScoreAve[j] = iScoreAve[j + 1];
				iScoreAve[j + 1] = temp;

				temp = iHighNo[j];
				iHighNo[j] = iHighNo[j + 1];
				iHighNo[j + 1] = temp;
				
				tmp = *cSubject[j];
				*cSubject[j] = *cSubject[j + 1];
				*cSubject[j + 1] = tmp;

				temp = iScoreHigh[j];
				iScoreHigh[j] = iScoreHigh[j + 1];
				iScoreHigh[j + 1] = temp;

				temp = iScoreLow[j];
				iScoreLow[j] = iScoreLow[j + 1];
				iScoreLow[j + 1] = temp;

				temp = iFineCount[j];
				iFineCount[j] = iFineCount[j + 1];
				iFineCount[j + 1] = temp;

				temp = iFailCount[j];
				iFailCount[j] = iFailCount[j + 1];
				iFailCount[j + 1] = temp;
			}
		}
	}
}