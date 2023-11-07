#include <unistd.h>

int main()
{
	char buff[10];
	while(1)
	{
		int a=read(0,buff,1);
		write(a,buff,1);
	}
	return 0;
}
