#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *p1;
	char str1[10], str2[10], str3[100];
	int a = 1; int b = 1;
	p1 = fopen("Testing.txt", "w+");
	printf("hey which 2 strings to put in? seperate words(with max word length = 10 letters) with a space\n");
	scanf("%[^\n]", str3);
	fputs(str3, p1);
	rewind(p1);
	fscanf (p1, "%s %s", &str1, &str2);
	fclose(p1);
	p1 = fopen("Result.txt", "w+");
	fprintf(p1, "%s %s", str1, str2);
	if (remove("Testing.txt") == 0){
		printf("Removed Testing file successfully");
	}
	else {
		printf ("Failed to remove Testing file");
	}
	fclose(p1);
	return 0;
}