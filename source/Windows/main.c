#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
char notes[200], r;
int loop=1;
while (loop == 1) {

printf("MY NOTES\n*************************************\n\n");


	FILE *note;

	note = fopen("NOTEFILE", "r");
	if (note == NULL) {
	printf("\nERROR");
	return 1;
	}

	r = fgetc(note);
	while (r != EOF)
	{
		printf("%c", r);
		r = fgetc(note);
	}
	fclose(note);

	note = fopen("NOTEFILE", "a");
	if (note == NULL) {
	printf("\nERROR");
	return 1;
	}

	printf("\n\nEnter a new note (Press CTRL+C to cancel): ");
	fgets(notes, sizeof(notes), stdin);
	fprintf(note, "%s", notes);
	fclose(note);

    system("cls");
}
	return 0;
}
