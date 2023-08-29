#include<stdio.h>
#define SET(a,p) a|(0x1<<p)
#define CLEAR(a,p) a&(~(0x1<<p))
#define TOGGEL(a,p) a^(0x1<<p)
#define CHECK(a,p) a&(0x1<<p)

int main()
{
int a,p;
printf("Enter value: ");
scanf("%d",&a);
printf("Enter position: ");
scanf("%d",&p);
printf("Set value=%d\n",SET(a,p));
printf("Clear value=%d\n",CLEAR(a,p));
printf("Toggle values=%d\n",TOGGEL(a,p));
printf("Checking the bit --> ");
CHECK(a,p)?printf("ON\n"):printf("OFF\n");
int x;
printf("Enter value: ");
scanf("%d",&x);
if(x&0x1)
printf("ODD\n");
else
printf("EVEN\n");
}
