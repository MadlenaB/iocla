// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>

/*
 * Afisati adresele elementelor din vectorul "v" impreuna cu valorile
 * de la acestea.
 * Parcurgeti adresele, pe rand, din octet in octet,
 * din 2 in 2 octeti si apoi din 4 in 4.
 */

int main(void)
{
	int v[] = {0xCAFEBABE, 0xDEADBEEF, 0x0B00B135, 0xBAADF00D, 0xDEADC0DE};
	//unsigned char - 1 octet; unsigned short - 2 octeti; unsigned int - 4 octeti

	unsigned char *char_ptr = (unsigned char *)&v;
	unsigned short *short_ptr = (unsigned short *)&v;
	unsigned int *int_ptr = (unsigned int *)&v;
	printf("AFISAM ADRESELE DIN OCTET IN OCTET\n");
	for (int i = 0 ; i < sizeof(v)/(sizeof(*char_ptr)); ++i) {
		printf("%p -> 0x%x\n", char_ptr, *char_ptr);
		char_ptr++;
	}
	printf("AFISAM ADRESELE DIN 2 IN 2 OCTETI\n");
	for (int i = 0 ; i < sizeof(v)/(sizeof(*short_ptr)); ++i) {
		printf("%p -> 0x%x\n", short_ptr, *short_ptr);
		short_ptr++;
	}
	printf("AFISAM ADRESELE DIM 4 IN 4 OCTETI\n");
	for(int i = 0; i<sizeof(v)/(sizeof(*int_ptr)); i++) {
		printf("%p -> 0x%x\n", int_ptr, *int_ptr);
		int_ptr++;
	}
	return 0;
}
