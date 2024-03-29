// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>

int main(void)
{
	int v[] =  {1, 2, 15, 51, 53, 66, 202, 7000};
	int dest = v[2]; /* 15 */
	int start = 0;
	int end = sizeof(v) / sizeof(int) - 1;

	int middle;
	/* TODO: Implement binary search */
	// (void) dest;
	// (void) start;
	// (void) end;

dest:
	if(start == end)
		goto end;
	middle = (start + end) / 2;
	if(v[middle] < dest) 
		goto start;
	end = middle; 
	goto dest;
start:
	start = middle + 1;
	goto dest;
end:
	printf("Am gasit dest %d la pozitia %d\n", dest, start);
return 0;
}
