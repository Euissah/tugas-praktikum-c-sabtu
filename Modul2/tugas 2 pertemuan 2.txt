#include <stdio.h>
#define Pl 3.14159

int main()
{
	float r = 7.5;
	float volume;
	
	volume = (4.0/3.0) * Pl * r * r * r;
	
	printf("Volume bola adalah: %.2f cm^3\n", volume);
	
	return 0;
}
