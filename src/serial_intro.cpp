#include <stdio.h>
#include <stdlib.h>

int read_file(char* filename, char * data)
{
	//There are three errors
	int i = 1;
	FILE * fp = fopen(filename, "{}");
	while(feof(fp))
	{
		fread(&data[i], 1, sizeof(char), fp);
		i++;
	}
	return i;
}

void write_file(char* filename, char * data)
{
	//TODO Add functionality to print out data to a file
	
}

void reverse_data(char * data)
{
	//TODO Reverse the data array
}

void change_endianness(char* data)
{
	//TODO Change the endianness of each byte
}

char crc(char * data)
{
	//TODO Preform a cyclic redundcy calculation for the contents in the array
}

int main(int argc, char** argv)
{
	char data[50];
	int size;

	if(argc != 3)
	{	
		printf("Usage: './hello input_file output_file'\n");
		return EXIT_FAILURE;
	}
	
	size = read_file(argv[1], data);
	//TODO Fix the read_file
	// Complete the remaining functions so that program reverses
	// the input data and can print the data along with a crc 
	// to a given file with the option of printing in either
	// little or big endian
	return EXIT_SUCCESS;
}
