##Date:18-08-2023;Topic:strings assignment

1). Take a string as an input, and count the number of words in the string. Take space, comma,exclamation, question mark and fullstop as delimitters for word counting.

2). Write a program that reads a string as input, and determines whether the string is a palindrome or not.

3). Write a program to replace a given character by another character in a string.
" WAP to display the word expansion of a number
eg., Input : 789
Output : Seven Eight Nine"

4). "Write a program to find the length of a string. Length is the number of characters in a string (null character is not counted).
eg., char name[10] = ""abc""; //size of name is 10 bytes
            // length of name is 3"
5). "Write a program to convert a string into upper case and print.
eg., input : Hello
output : HELLO"

6). "Write a program to convert a string into lower case and print.
eg., input : Hello
output : hello"

Implement below functions on your own (change function name)

7) int strlen( char str[]);
returns the length of the string.

Implementation:
//string length is the count of characters till the first null character is found in a string
int strlen_1(char str[])
{
int i;
for(i=0; str[i] != '\0'; i++); // count all characters till null character is found.
return i;  // return the count.
}

8) void strcpy ( char d[] . char s[]);
copies all characters from source string (char s[]) to destination string( char d[]) , upto null character ( including null character).

Implementation:

void strcpy_1( char d[], char s[])
{
int i = 0;
while( s[i] != '\0')
{
d[i] = s[i];
i++;
}
d[i] = '\0';
}

9) void strcat( char d[] , char s[]);

concatenates the content from source string to the end of destination string ( copy paste characters from s to  d , from null character index in d )
eg., char d[] = "Kernel";
char s[] = "Masters";

output: after concatenation d[] becomes " KernelMasters";

10)  void strlwr( char str[]);
// convert all upper case alphabets to lower case in the given string

11) void strupr (char str[]);
// convert all lower case alphabets to upper case in the given string

12) void strrev( char str[]);

//reverse the string (without using any extra array)

eg., input : str[] = "Kernel";

output : str[] = "lenreK"

13) int palindrome (char str[])
// return 1 if the given string is a palindrome, return 0 if it is not a palindrome

14) int strchr( char str[], char ch)
// search the character ch ,in string str , whenever the first matching occurs, return the matching index. 
