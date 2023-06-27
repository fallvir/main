#include <stdio.h>
#include <clocale>

#pragma warning (disable: 4996)
int main()
{
	setlocale(0, "");
	FILE* f1;
	f1 = fopen("in1.txt", "r");
	int n;
	fscanf_s(f1, "%d", &n);
	int* mas1 = new int[n];
	for (int i = 0; i < n; i++)
	{ 
		fscanf_s(f1, "%d ", &mas1[i]);
	}

	fclose(f1);

	for (int i = 0; i < n; i++)
	{
		printf("%d ", mas1[i]);
	}




	return 0;
}

