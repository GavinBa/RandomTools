
#include <stdio.h>
#include <string.h>

int main(int argc , char *argv[]) {
	FILE *OutFile;
	unsigned long count;

	OutFile = fopen("TestFile.bin","w");
	if (OutFile){
		printf("writing file\n");
		for (count = 0; count < 0x6000000; count++)
		{
			fputc(0x00,OutFile);
		}
		fclose(OutFile);
	}
	else
		printf("Failed to create output file\n");
	return 0;
}
