//Написать функцию, которая в массиве вещественных чисел обнуляет все элементы, которые меньше среднего арифметического значения элементов исходного массива.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void sr_ar(float* arr, int len) 
{
	int i;
	float K = 0;
	float T = 0;
	float S;
	for (i = 0; i < len; i++)
	{
		K = K + 1;
		T = T + arr[i];
		S = T / K;
	}
	for (i = 0; i < len; i++)
	{
		if (arr[i] < S)
		{
				arr[i] = 0;
		}
	}
}
int main()
{
	int i, l;
	float m[100];
	printf("Enter the length of the array \n");
	if ((scanf("%d", &l) != 1) || (l<=0))
	{
		printf("Only positive integer numbers can be entered ");
		return -1;
	}
	else if (l > 100)
	{
		printf("Array size exceeded");
		return -1;
	}
	else
		for (i = 0; i < l; i++)
		{
		    printf("Enter the %d element \n", i + 1);
			if (scanf("%f", &m[i]) != 1) 
			{
				printf("Only numbers can be entered ");
				return -1;
			}
	    }
	sr_ar(m, l);
	printf("New array \n");
	for (i = 0; i < l; i++)
	{

		printf("%f \n", m[i]);
	}
	return 0;
}