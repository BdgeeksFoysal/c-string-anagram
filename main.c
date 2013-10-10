#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

int main(void){
	char s1[MAX] = "hithere", s2[MAX] = "hellothere";
	int occurences[26], i, flag;

	//populating occurences with 0 value for each array element
	for (i = 0; i < 26; ++i){
		occurences[i] = 0;
	}

	//mother of inteligence!
	for (i = 0; i < strlen(s1); ++i){
		occurences[tolower(s1[i]) - 'a']++;
	}

	for (i = 0; i < strlen(s2); ++i){
		occurences[tolower(s2[i]) - 'a']--;
	}

	flag = 1;

	for (i = 0; i < 26 && flag; ++i){
		if (occurences[i] != 0){
			flag = 0;
		}
	}


	return 0;
}