#include <stdio.h>
#include <stdlib.h>
int main() {
char notes[200], r;
int loop=1;
while (loop == 1) {
clrscr();
printf("CLINOTE - MY NOTES\n##########################################\n\n");


	FILE *note;
	
	note = fopen(".NOTEFILE", "r");
	if (note == NULL) {
	printf("\nERROR!\n");
	fclose(fopen(".NOTEFILE", "w"));
	printf("No .NOTEFILE found. Creating...\nDone.");
	note = fopen(".NOTEFILE", "r");
	}
	
	r = fgetc(note);
	while (r != EOF)
	{
		printf("%c", r);
		r = fgetc(note);
	}	
	fclose(note);
	
	note = fopen(".NOTEFILE", "a");
	if (note == NULL) {
	printf("\nERROR");
	return 1;
	}
	
	printf("\n##########################################\nEnter a new note (Press CTRL+C to cancel): ");
	fgets(notes, sizeof(notes), stdin);
	fprintf(note, "%s", notes);
	fclose(note);

}
	return 0;
}
