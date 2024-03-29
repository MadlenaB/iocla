// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>

int main(void)
{
	int v[] = {4, 1, 2, -17, 15, 22, 6, 2};
	int max;
	int i;

	/* TODO: Implement finding the maximum value in the vector */
	max = v[0];
	i = 1;
max:
	if(v[i] <= max){
		goto i;
	}

	max = v[i];

i:
	i++;
	if(i < sizeof(v) / sizeof(int)) {
		goto max;
	}
	printf("Maxim este %d", max);
	return 0;
}
