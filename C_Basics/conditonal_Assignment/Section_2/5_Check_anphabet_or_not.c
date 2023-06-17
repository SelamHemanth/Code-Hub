#include <stdio.h>
int main()
{
char ch;
printf("Enter a character: ");
scanf("%c", &ch);
if (ch >= 97)
{
if( ch <= 122)
{
printf("%c is an alphabet.\n", ch);
}
}
else
{
if (ch >= 65)
{
if(ch <= 90)
{
printf("%c is an alphabet.\n", ch);
}
}
else
{
printf("%c is not an alphabet.\n", ch);
}
}
return 0;
}
