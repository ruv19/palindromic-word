#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {
	int j=0;
	char kelime[50], harf[50];
	printf("\nBir kelime giriniz:");
	gets(kelime);
	for(int i=0; i<strlen(kelime); i++) {
		harf[j]=kelime[i];
		j++;
	}

	{
		printf("Kelime Palindromiktir",strcmp(harf,kelime));
    }
}
