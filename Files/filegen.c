
#include <stdio.h>
#include <string.h>

int main(int argc , char *argv[]) {
	FILE *OutFile;
	unsigned long count;
	unsigned char c = 0;

	OutFile = fopen("TestFile.bin","w");
	if (OutFile){
		printf("writing file\n");
		for (count = 0; count < 1500000000; count++)
		{
			fputc(c++,OutFile);
		}
		fclose(OutFile);
	}
	else
		printf("Failed to create output file\n");
	return 0;
}
