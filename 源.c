#include<stdio.h>
struct Student_Info {
	int num;
	char name[20];
	int chinese;
	int math;
	int english;
	int sum;
	double ave;
};
typedef struct Student_Info STU;
int main()
{

	STU* pstu;
	STU temp;
	int n, i, j, index;
	scanf_s("%d", &n);
	pstu = (STU*)malloc(n * sizeof(STU));
	//����//
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &pstu[i].num);
		scanf_s("%d", &pstu[i].chinese);
		scanf_s("%d", &pstu[i].math);
		scanf_s("%d", &pstu[i].english);
		pstu[i].sum = pstu[i].chinese + pstu[i].math + pstu[i].english;
		pstu[i].ave = pstu[i].sum / 3.0;
	}
	//����//
	for (i = 0; i < n - 1; i++) //�������
	{
		index = i;
		for (j = i + 1; j < n; j++)
		{
			if (pstu[j].ave > pstu[index].ave)
				index = j;
		}
		if (index != i)
		{
			temp = pstu[index];
			pstu[index] = pstu[i];
			pstu[i] = temp;
		}
	}

	//����//
	for (i = 0; i < n; i++)
		printf("%d\n", pstu[i].ave);
	free(pstu);
	return 0;
}