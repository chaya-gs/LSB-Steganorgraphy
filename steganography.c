#include "steganography.h" 

int main(int argc, char *argv[])
{
	system("clear");
	if (handle_error(argc, argv) > -1)
	{
		exit(1);	
	}
	if (argv[1][1] ==  'e')
	{
		encryption(argv);
	}
	else
	{
		decryption(argv);
	}
	return 0;
}
