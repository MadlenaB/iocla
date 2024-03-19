// SPDX-License-Identifier: BSD-3-Clause
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *delete_first(char *s, char *pattern){
	char *found = strstr(s, pattern); //found va pointa la prima aparitie a pattern-ului
	if(!found){
		return strdup(s); //returnam sirul printr-un pointer
	}

	int inc = found - s; //inc - cate caractere avem inainte de pattern
	int length_pattern = strlen(pattern);
	char *s_result = malloc(strlen(s)+1 - length_pattern);
	if(!s_result){return NULL;};
	strncpy(s_result, s, inc);
	strcpy(s_result + inc, found + length_pattern);
	return s_result;
}

int main(void)
{
	char *s = "Ana are mere";
	char *pattern = "re";
	// Decomentați linia după ce ați implementat funcția delete_first.
	printf("%s\n", delete_first(s, pattern));

	return 0;
}
