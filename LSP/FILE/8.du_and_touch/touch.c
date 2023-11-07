 #include <sys/types.h>
 #include <utime.h>
 #include <sys/time.h>

int main(int argc, char *argv[])
{
	struct utimbuf time;
	time.modtime=0;
 utime(argv[1],time.modtime);
}
